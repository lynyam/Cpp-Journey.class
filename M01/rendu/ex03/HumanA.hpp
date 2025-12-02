#ifndef _HUMANA_H_
# define _HUMANA_H_

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	public :
		HumanA( std::string name, const Weapon& club );
		void attack( void ) const;
	private :
		std::string		_name;
		const Weapon&	_weapon;
};

#endif


