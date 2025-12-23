#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

bool is_printable(const std::string& s)
{
	if (s.empty()) return (false);
	for (size_t i = 0; i < s.length(); i++) {
		unsigned char c = s[i];
		if (c < 32 || c > 126)
			return false;
	}
	return true;
}

std::string promptedInput(const std::string& infoType)
{
	std::string info;

	std::cout << "Enter non-empty " << infoType << ": ";
	while (std::getline(std::cin, info))
	{
		if (!info.empty() && is_printable(info))
			return info;
		std::cout << "Enter non-empty " << infoType << ": ";
	}
	return ""; // EOF
}

Contact addNewContact(void) {
	std::cout << "You are prompted to input the information of the new contact one field at a time" << std::endl;
	std::string firstName = promptedInput("First Name");
	if (firstName.empty()) return Contact();
	std::string lastName = promptedInput("Last Name");
	if (lastName.empty()) return Contact();
	std::string nickName = promptedInput("Nick Name");
	if (nickName.empty()) return Contact();
	std::string number = promptedInput("number");
	if (number.empty()) return Contact();
	std::string darkestSecret = promptedInput("darkest Secret");
	if (darkestSecret.empty()) return Contact();
	return Contact(firstName, lastName,
				nickName, number, darkestSecret);
}

void formatedDisplay(std::string raw) {
	char troncat[11];
	for (int i = 0; i < 11; i++) troncat[i] = ' ';
	troncat[10] = '\0';
	int length = raw.length();
	if (length >= 11) {
		raw.copy(troncat, 10, 0);
		troncat[9] = '.';
	} else {
		for (int i = 0; i < length; i++)
			troncat[i + 10 - length] = raw[i];
	}
	std::cout << troncat;
}

void	displayLine(const Contact *contact, int index) {
	std::cout << "         " << index ;
	std::cout << "|";
	formatedDisplay(contact->getFirstName());
	std::cout << "|";
	formatedDisplay(contact->getLastName());
	std::cout << "|";
	formatedDisplay(contact->getNickName());
	std::cout << std::endl;
}

void	getAllContactInfo(const Contact *contact) {
	std::cout << contact->getFirstName() << std::endl;
	std::cout << contact->getLastName() << std::endl;
	std::cout << contact->getNickName() << std::endl;
	std::cout << contact->getNumber() << std::endl;
	std::cout << contact->getDarkestSecret() << std::endl;
}

void	displayContacts(const Contact *contacts, int len) {
	int i = 0;
	while (i < len) {
		displayLine(&contacts[i], i);
		i++;
	}
}

void	searchContact(PhoneBook *pb) {
	int len = pb->getLen();
	if (len <= 0) {
		std::cout << "INFO : Empty PhoneBook, no displayed contacts" << std::endl;
		return ;
	}
	const Contact *contacts = pb->getContacts();
	displayContacts(contacts, len);
	std::string index;
	std::cout << "Enter the index to display in range [0, " << len - 1 
				  << "]" << std::endl;
	while (std::getline(std::cin, index)) {
		if (index.size() == 1 && is_printable(index) &&
				index[0] >= '0' && index[0] < len + '0') {
			getAllContactInfo(&contacts[index[0] - '0']);
			return ;
		}
		std::cout << "Enter the index to display in range [0, " << len - 1 
				  << "]" << std::endl;
	}
}

void	addNewContact(PhoneBook *pb) {
	Contact c1 = addNewContact();
	if (c1.isEmpty() || !pb->addContact(c1)) {
		std::cout << "Error: Contact Not add To Phonebook" << std::endl;
	} else 
		std::cout << "Succes: New Contact add To Phonebook" << std::endl;
}

int main(void) {
	PhoneBook pb;
	std::string prompt;

	std::cout << "** PhoneBook is empty, you can prompt to enter one of three commands **" << std::endl;
	std::cout << "[  ADD ] => save new contact" << std::endl;
	std::cout << "[SEARCH] => display a specific contact" << std::endl;
	std::cout << "[ EXIT ] => to quit and lost contact forever" << std::endl;
	std::cout << "/!\\ Any other input is ignored /!\\" << std::endl;
	while (std::getline(std::cin, prompt)) {
		if (prompt.compare("ADD") == 0)
			addNewContact(&pb);
		else if (prompt.compare("SEARCH") == 0)
			searchContact(&pb);
		else if (prompt.compare("EXIT") == 0)
			break ;
	}
	return 0;
}
