#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("ScavTrap") {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "[ScavTrap] Default Constructor Called\n";
}

ScavTrap::ScavTrap( const std::string& name ): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "[ScavTrap] Constructor for " << name << "\n";
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other ) {
	std::cout << "[ScavTrap] Copy Constructor for " << getName() << "\n";
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {
	if ( this != &other )
		ClapTrap::operator=( other );
	std::cout	<< "[ScavTrap] Copy Assignement operator called for "
				<< getName() << "\n";
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "[ScavTrap] Destructeur for " << getName() << "\n";
}

void	ScavTrap::guardGate( void ) {
	std::cout	<< "ScavTrap " << getName() 
				<< " is now in Gate keeper mode\n";
}

void	ScavTrap::attack( const std::string& target ) {
	if (!canAct()) return logNoAction();
	setEnergyPoints(getEnergiesPts() - 1);
	std::cout	<< "ScavTrap " << getName()
				<< " attacks " << target
				<< ", causing " << getAttackDmg() 
				<< " points of damage and lost -1 energie point!\n";
}
