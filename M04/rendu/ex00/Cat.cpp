#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) {
	std::cout	<< "[ Cat ] : Default Constructor \n";
}

Cat::Cat( std::string type ) : Animal( type ) {
	std::cout	<< "[ Cat ] : Constructor for type " << type << "\n";
}

Cat::Cat( Cat& other ) : Animal( other ) {
	std::cout	<< "[ Cat ] : Copy Constructor \n";
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout	<< "[ Cat ] : operator (=) \n";
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat( void ) {
	std::cout	<< "[ Cat ] : Destructor for type " 
				<< type << "\n";
}

void	Cat::makeSound( void ) const {
	std::cout	<< "[ Cat ] : Make a Miawou Sound\n";
}


