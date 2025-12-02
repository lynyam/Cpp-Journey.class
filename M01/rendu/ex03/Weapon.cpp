#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type( type ) {}

const	std::string& Weapon::getType( void ) const {
	return _type;
}

void	Weapon::setType( const std::string& nType ) {
	if ( nType.empty() ) {
		std::cout << "Error: Empty Weapon Type {" << nType<< "}" << std::endl;
		return ;
	}
	_type = nType;
}
