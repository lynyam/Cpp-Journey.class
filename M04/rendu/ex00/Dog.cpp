#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ) {
	std::cout	<< "[ Dog ] : Default Constructor \n";
}

Dog::Dog( std::string type ) : Animal( type ) {
	std::cout	<< "[ Dog ] : Constructor for type " << type << "\n";
}

Dog::Dog( Dog& other ) : Animal( other ) {
	std::cout	<< "[ Dog ] : Copy Constructor \n";
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout	<< "[ Dog ] : operator (=) \n";
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog( void ) {
	std::cout	<< "[ Dog ] : Destructor for type " 
				<< type << "\n";
}

void	Dog::makeSound( void ) const {
	std::cout	<< "[ Dog ] : Make a Bark Sound\n";
}


