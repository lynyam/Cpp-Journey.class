#include "AMateria.hpp"

AMateria::AMateria( void ) : type("UNKNOWN") {
	std::cout	<< "[AMateria] Default Constructor for type "
				<< type << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout	<< "[AMateria] Destructor for type "
				<< type << std::endl;
}

AMateria::AMateria( std::string const & type ) : type( type ) {
	std::cout	<< "[AMateria] Constructor for type "
				<< type << std::endl;
}

AMateria::AMateria( const AMateria & other ) {
	std::cout	<< "[AMateria] Copy Constructor for type "
				<< other.type << std::endl;
	*this = other;
}

AMateria&	AMateria::operator=( const AMateria & other ) {
	std::cout	<< "[AMateria] Assignement Operator for type "
				<< other.type << std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

std::string const & AMateria::getType( void ) const {
	return type;
}

void	AMateria::use( ICharacter& target ) {
	std::cout	<< "[AMateria] * random display for "
				<< target.getName() << std::endl;
}
