#include "Contact.hpp"

Contact::Contact(void) {}

Contact::Contact(std::string fName, 
				std::string lName,
				std::string nName,
				std::string number,
				std::string dSecret) : 
				_firstName(fName),
				_lastName(lName),
				_nickName(nName),
				_number(number),
				_darkestSecret(dSecret) {}

Contact::~Contact(void) {}

bool	Contact::isEmpty(void) const {
	return (_firstName.empty()
			&& _lastName.empty()
			&& _nickName.empty()
			&& _number.empty()
			&& _darkestSecret.empty());
}

std::string Contact::getFirstName(void) const {
	return _firstName;
}

std::string Contact::getLastName(void) const {
	return _lastName;
}

std::string Contact::getNickName(void) const {
	return _nickName;
}

std::string Contact::getNumber(void) const {
	return _number;
}

std::string Contact::getDarkestSecret(void) const {
	return _darkestSecret;
}

