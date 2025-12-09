#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ) {
	std::cout	<< "[ Dog ] : Default Constructor \n";
	_brain = new Brain();
}

Dog::Dog( std::string type ) : Animal( type ) {
	std::cout	<< "[ Dog ] : Constructor for type " << type << "\n";
	_brain = new Brain();
}

Dog::Dog( const Dog& other ) : Animal( other ) {
	std::cout	<< "[ Dog ] : Copy Constructor \n";
	_brain = new Brain(*other._brain);
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout	<< "[ Dog ] : operator (=) \n";
	if (this != &other) {
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

Dog::~Dog( void ) {
	std::cout	<< "[ Dog ] : Destructor for type " 
				<< type << "\n";
	delete(_brain);
}

void	Dog::makeSound( void ) const {
	std::cout	<< "[ Dog ] : Make a Bark Sound\n";
}

Brain*	Dog::getBrain( void ) const {
	return _brain;
}


