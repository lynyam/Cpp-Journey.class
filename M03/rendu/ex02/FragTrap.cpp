#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("FragTrap") {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap] Default Constructor Called\n";
}

FragTrap::FragTrap( const std::string& name ): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap] Constructor for " << name << "\n";
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other ) {
	std::cout << "[FragTrap] Copy Constructor for " << getName() << "\n";
}

FragTrap&	FragTrap::operator=( const FragTrap& other ) {
	if ( this != &other )
		ClapTrap::operator=( other );
	std::cout	<< "[FragTrap] Copy Assignement operator called for "
				<< getName() << "\n";
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "[FragTrap] Destructeur for " << getName() << "\n";
}

void	FragTrap::highFivesGuys( void ) {
	std::cout	<< "FragTrap " << getName() 
				<< " requests a positive high five!\n";
}

void	FragTrap::attack( const std::string& target ) {
	if (!canAct()) return logNoAction();
	useEnergy();
	std::cout	<< "FragTrap " << getName()
				<< " attacks " << target
				<< ", causing " << getAttackDmg() 
				<< " points of damage and lost -1 energie point!\n";
}
