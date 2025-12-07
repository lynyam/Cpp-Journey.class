#include "Animal.hpp"

Cat::Cat( void ) : Animal(), _name("NotDefined") {
	std::cout << "Cat defaul constructor call\n";
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor call\n";
}

Cat::Cat( std::string name ) : Animal(), _name(name) {
	std::cout << "Cat constructor call\n";
}

void	Cat::comunicate( void ) const {
	std::cout << "Cat " << getName() << " Miao\n";
}

void	Cat::grimace( void ) const {
	std::cout << " Cat " << getName() << " grimace\n";
}

std::string		Cat::getName( void ) const {
	return _name;
}
