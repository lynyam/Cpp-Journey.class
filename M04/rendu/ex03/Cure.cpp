#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	std::cout	<< "[Cure] Default Constructor for type "
				<< type << std::endl;
}

Cure::~Cure( void ) {
	std::cout	<< "[Cure] Destructor for type "
				<< type << std::endl;
}

Cure::Cure( std::string const & type ) : AMateria( type ) {
	std::cout	<< "[Cure] Constructor for type "
				<< type << std::endl;
}

Cure::Cure( const Cure & other ) : AMateria( other ) {
	std::cout	<< "[Cure] Copy Constructor for type "
				<< other.type << std::endl;
}

Cure&	Cure::operator=( const Cure & other ) {
	std::cout	<< "[Cure] Assignement Operator for type "
				<< other.type << std::endl;
	(void)other;
	return *this;
}

AMateria*	Cure::clone( void ) const {
	std::cout	<< "[Cure] Clone for type "
				<< type << std::endl;	
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout	<< "[Cure] * heals "
				<< target.getName() << "’s wounds *\n";
}
