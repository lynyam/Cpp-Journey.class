#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		FragTrap&	operator=( const FragTrap& other );
		~FragTrap( void );
		void	highFivesGuys( void );
		void	attack( const std::string& target );
	
	protected:
    	static const unsigned int kDefaultHitPoints;
    	static const unsigned int kDefaultEnergyPoints;
    	static const unsigned int kDefaultAttackDamage;
};
#endif
