#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact {
	public:
		Contact(std::string fName, 
				std::string lName,
				std::string nName,
				std::string number,
				std::string dSecret);
		Contact(void);
		~Contact(void);
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getNumber(void) const;
		std::string getDarkestSecret(void) const;
		bool	isEmpty(void) const;
	private:
		std::string _firstName; 
		std::string _lastName;
		std::string _nickName;
		std::string _number;
		std::string _darkestSecret;
};

#endif
