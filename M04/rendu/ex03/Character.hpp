#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
	private :
		std::string _name;
		static const int size = 4;
		AMateria *_invent[size];

	public :
		Character( void );
		Character( const std::string name );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		virtual ~Character( void );

		virtual std::string const & getName( void ) const;
		virtual void equip( AMateria* m );
		virtual void unequip( int idx );
		virtual void use( int idx, ICharacter& target );
		AMateria* 	getMateria(int idx) const;
};
#endif
