#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) {
	std::cout	<< "[ Cat ] : Default Constructor \n";
	_brain = new Brain();
}

Cat::Cat( std::string type ) : Animal( type ) {
	std::cout	<< "[ Cat ] : Constructor for type " << type << "\n";
	_brain = new Brain();
}

Cat::Cat( const Cat& other ) : Animal( other ) {
	std::cout	<< "[ Cat ] : Copy Constructor \n";
	_brain = new Brain(*other._brain);
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout	<< "[ Cat ] : operator (=) \n";
	if (this != &other) {
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat( void ) {
	std::cout	<< "[ Cat ] : Destructor for type " 
				<< type << "\n";
	delete(_brain);
}

void	Cat::makeSound( void ) const {
	std::cout	<< "[ Cat ] : Make a Miawou Sound\n";
}

Brain*	Cat::getBrain( void ) const {
	return _brain;
}


