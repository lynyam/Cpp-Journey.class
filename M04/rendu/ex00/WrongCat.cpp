#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" ) {
	std::cout	<< "[ WrongCat ] : Default Constructor \n";
}

WrongCat::WrongCat( std::string type ) : WrongAnimal( type ) {
	std::cout	<< "[ WrongCat ] : Constructor for type " << type << "\n";
}

WrongCat::WrongCat( WrongCat& other ) : WrongAnimal( other ) {
	std::cout	<< "[ WrongCat ] : Copy Constructor \n";
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	std::cout	<< "[ WrongCat ] : operator (=) \n";
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout	<< "[ WrongCat ] : Destructor for type " 
				<< type << "\n";
}

void	WrongCat::makeSound( void ) const {
	std::cout	<< "[ WrongCat ] : Make a Miawou Sound\n";
}


