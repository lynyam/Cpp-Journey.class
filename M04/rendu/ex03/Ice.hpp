#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria {
	public :
		Ice( void );
		Ice( std::string const & type );
		Ice( const Ice & other );
		Ice& operator=( const Ice & other );
		virtual AMateria* clone( void ) const;
		virtual void use( ICharacter& target );
		virtual ~Ice( void );
};
#endif
