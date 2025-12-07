#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public :
		DiamondTrap( void );
		DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap& other );
		DiamondTrap&	operator=( const DiamondTrap& other );
		virtual ~DiamondTrap( void );
		void	whoAmI( void );
		using ScavTrap::attack;
	private :
		std::string _name;
};
#endif
