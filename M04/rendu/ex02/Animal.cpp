#include "Animal.hpp"

Animal::Animal() : type( "Default" ) {
	std::cout	<< "[ Animal ] : Default Constructor \n";
}

Animal::Animal( std::string type ) : type( type ) {
	std::cout	<< "[ Animal ] : Constructor for type " << type << "\n";
}

Animal::Animal( const Animal& other ) {
	*this = other;
	std::cout	<< "[ Animal ] : Copy Constructor \n";
}

Animal&	Animal::operator=( const Animal& other ) {
	std::cout	<< "[ Animal ] : operator (=) \n";
	type = other.type;
	return *this;
}

Animal::~Animal( void ) {
	std::cout	<< "[ Animal ] : Destructor for type " << type << "\n";
}

void	Animal::makeSound( void ) const {
	std::cout	<< "[ Animal ] : Make a Generic Sound\n";
}

const	std::string&	Animal::getType( void ) const {
	return type;
}



