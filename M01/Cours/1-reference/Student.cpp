#include "Student.hpp"

Student::Student( void ) : _login( "ldefault" ) {}

Student::Student( std::string login) : _login( login ) {
	std::cout << "Student login : " << _login << " Created" << std::endl; 
}

Student::~Student( void ) {
	std::cout << "Student login : " << _login << " is destroyed" << std::endl;
}

std::string& Student::getLogin(void) {
	return _login;
}
