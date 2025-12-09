#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	std::cout	<< "[Ice] Default Constructor for type "
				<< type << std::endl;
}

Ice::~Ice( void ) {
	std::cout	<< "[Ice] Destructor for type "
				<< type << std::endl;
}

Ice::Ice( std::string const & type ) : AMateria( type ) {
	std::cout	<< "[Ice] Constructor for type "
				<< type << std::endl;
}

Ice::Ice( const Ice & other ) : AMateria( other ) {
	std::cout	<< "[Ice] Copy Constructor for type "
				<< other.type << std::endl;
}

Ice&	Ice::operator=( const Ice & other ) {
	std::cout	<< "[Ice] Assignement Operator for type "
				<< other.type << std::endl;
	(void)other;
	return *this;
}

AMateria*	Ice::clone( void ) const {
	std::cout	<< "[Ice] Clone for type "
				<< type << std::endl;	
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target ) {
	std::cout	<< "[Ice] * shoots an ice bolt at "
				<< target.getName() << " *\n";
}
