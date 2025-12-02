#ifndef _STUDENT_H
# define _STUDENT_H
#include <iostream>
#include <string>

class Student {
	public :
		Student( void );
		Student( std::string login );
		~Student( void );
		std::string& getLogin(void);
	private:
		std::string _login;
};

#endif
