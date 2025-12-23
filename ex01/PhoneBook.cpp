#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) :_top(0), _len(0), _cap(8) {}
PhoneBook::~PhoneBook(void) {}

bool	PhoneBook::addContact(Contact newContact) {
	if (newContact.isEmpty()) return false;
	_contacts[_top] =  newContact;
	_top = (_top + 1) % _cap;
	if (_len < _cap) _len++;
	return (true);
}

const Contact* PhoneBook::getContacts(void) const {
	return _contacts;
}

int PhoneBook::getCap(void) const
{
	return _cap;
}

int PhoneBook::getLen(void) const
{
	return _len;
}
