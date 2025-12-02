#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include <string>
#include <iostream>

class Zombie {
	public :
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	setName( const std::string& name );
		
	private :
		std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
