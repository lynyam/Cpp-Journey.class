#include <string>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool addContact(Contact newContact);	
		const Contact *getContacts(void) const;
		int getCap(void) const;
		int getLen(void) const;
	private:
		Contact _contacts[8];
		int _top;
		int _len;
		const int _cap;
};
