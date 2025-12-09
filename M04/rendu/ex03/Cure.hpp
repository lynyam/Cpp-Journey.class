#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria {
	public :
		Cure( void );
		Cure( std::string const & type );
		Cure( const Cure & other );
		Cure& operator=( const Cure & other );
		virtual AMateria* clone( void ) const;
		virtual void use( ICharacter& target );
		virtual ~Cure( void );
};
#endif
