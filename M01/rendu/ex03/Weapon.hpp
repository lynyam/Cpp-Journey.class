#ifndef _WEAPON_H_
# define _WEAPON_H_

#include <string>
#include <iostream>

class Weapon {
	private :
		std::string _type;
	public :
		explicit Weapon( std::string type );
		const std::string& getType( void ) const;
		void	setType( const std::string& nType );
};
#endif
