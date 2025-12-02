#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

std::string promptedInput(const std::string infoType) {
	std::string info;
	while (info.empty()) {
		std::cout << "Enter no empty " << infoType <<": ";
		std::cin >> info;
	}
	return info;
}

Contact addNewContact(void) {
	std::cout << "You are prompted to input the information of the new contact one field at a time" << std::endl;
	std::string firstName = promptedInput("First Name");
	std::string lastName = promptedInput("Last Name");
	std::string nickName = promptedInput("Nick Name");
	std::string number = promptedInput("number");
	std::string darkestSecret = promptedInput("darkest Secret");
	return Contact(firstName, lastName,
				nickName, number, darkestSecret);
}

void formatedDisplay(std::string raw) {
	char troncat[11];
	int length = raw.copy(troncat, 11, 0);
	if (length == 11) troncat[9] = '.';
	while (length < 11) {
		troncat[length++] = ' ';
	}
	troncat[10] = '\0';
	std::cout << troncat;
}

void	displayLine(const Contact *contact, int index) {
	std::cout << index << "         ";
	std::cout << "|";
	formatedDisplay(contact->getFirstName());
	std::cout << "|";
	formatedDisplay(contact->getLastName());
	std::cout << "|";
	formatedDisplay(contact->getNickName());
	std::cout << std::endl;
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
	if (len == 0)
		std::cout << "INFO : Empty PhoneBook, no displayed contacts" << std::endl;
	const Contact *contacts = pb->getContacts();
	displayContacts(contacts, len);
	int index = -1;
	while (len > 0 && (index < 0 || index >= len)) {
		std::cout << "Enter the index to display in range [0, " << len - 1 << "]" << std::endl;
		std::cin >> index;
	}
	if (index != -1)
		displayLine(&contacts[index], index);
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
	while (std::cin >> prompt) {
		if (prompt.compare("ADD") == 0)
			addNewContact(&pb);
		else if (prompt.compare("SEARCH") == 0)
			searchContact(&pb);
		else if (prompt.compare("EXIT") == 0)
			return (0);
	}
	return 0;
}
