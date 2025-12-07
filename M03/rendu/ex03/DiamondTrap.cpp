#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ):	ClapTrap("DiamondTrap_clap_name"), 
									ScavTrap(), FragTrap() {
	_name = "Default DiamondTrap";
	setHitPoints(FragTrap::kDefaultHitPoints);
	setEnergyPoints(ScavTrap::kDefaultEnergyPoints);
	setAttackDamage(FragTrap::kDefaultAttackDamage);
	std::cout << "[DiamondTrap] Default Constructor Called\n";
}

DiamondTrap::DiamondTrap( const std::string& name ):	ClapTrap(name + "_clap_name"),
														ScavTrap(), FragTrap() {
	_name = name;
	setHitPoints(FragTrap::kDefaultHitPoints);
	setEnergyPoints(ScavTrap::kDefaultEnergyPoints);
	setAttackDamage(FragTrap::kDefaultAttackDamage);


	std::cout << "[DiamondTrap] Constructor for " << name << "\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap( other ), ScavTrap( other ), FragTrap( other ) {
	std::cout << "[DiamondTrap] Copy Constructor for " << _name << "\n";
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {
	if ( this != &other ) {
		ClapTrap::operator=( other );
		_name = other._name;
	}
	std::cout	<< "[DiamondTrap] Copy Assignement operator called for "
				<< _name << "\n";
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "[DiamondTrap] Destructeur for " << _name << "\n";
}

void	DiamondTrap::whoAmI( void ) {
	std::cout	<< "I am DiamondTrap " << _name
				<< " and my ClapTrap name is "
				<< ClapTrap::getName() << "\n";
}
