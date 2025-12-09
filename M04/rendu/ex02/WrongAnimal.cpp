#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "Default" ) {
	std::cout	<< "[ WrongAnimal ] : Default Constructor \n";
}

WrongAnimal::WrongAnimal( std::string type ) : type( type ) {
	std::cout	<< "[ WrongAnimal ] : Constructor for type " << type << "\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	*this = other;
	std::cout	<< "[ WrongAnimal ] : Copy Constructor \n";
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {
	std::cout	<< "[ WrongAnimal ] : operator (=) \n";
	type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout	<< "[ WrongAnimal ] : Destructor for type " << type << "\n";
}

void	WrongAnimal::makeSound( void ) const {
	std::cout	<< "[ WrongAnimal ] : Make a Generic Sound\n";
}

const	std::string&	WrongAnimal::getType( void ) const {
	return type;
}



