#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name( "unknown" ),
							_hitPts( 10 ),
							_energiesPts( 10 ),
							_attackDmg( 0 ) {
	std::cout << "[ClapTrap] Default Constructor Called\n";
}

ClapTrap::ClapTrap( const std::string& name ): _name( name ),
							_hitPts( 10 ),
							_energiesPts( 10 ),
							_attackDmg( 0 ) {
	std::cout << "[ClapTrap] Constructor for " << _name << "\n";
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << "[ClapTrap] Copy Constructor Called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {
	if (this != &other) {
		_name = other._name;
		_hitPts = other._hitPts;
		_energiesPts = other._energiesPts;
		_attackDmg = other._attackDmg;
	}
	std::cout	<< "[ClapTrap] Copy Assignement operator called for "
				<< _name << "\n";
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "[ClapTrap] Destructeur for " << _name << "\n";
}

bool	ClapTrap::canAct( void ) const {
	return _hitPts > 0 && _energiesPts > 0;
}

void	ClapTrap::logNoAction( void ) const {
	std::cout << "ClapTrap " << _name
              << " cannot act (hp=" << _hitPts
              << ", energy=" << _energiesPts << ")\n";
}

const std::string&	ClapTrap::getName( void ) const {
	return _name;
}

unsigned int	ClapTrap::getHitPts( void ) const {
	return _hitPts;
}

unsigned int	ClapTrap::getEnergiesPts( void ) const {
	return _energiesPts;
}

unsigned int	ClapTrap::getAttackDmg( void ) const {
	return _attackDmg;
}

void	ClapTrap::attack( const std::string& target ) {
	if (!canAct()) return logNoAction();
	_energiesPts--;
	std::cout	<< "ClapTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDmg 
				<< " points of damage and lost -1 energie point!\n";
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	_hitPts = amount >= _hitPts ? 0 : _hitPts - amount;
	std::cout	<< "ClapTrap " << _name
				<< " takes " << amount
				<<" damage (hitPts=" << _hitPts << ")\n";
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (!canAct()) return logNoAction();
	_hitPts += amount;
	_energiesPts--;
	std::cout	<< "ClapTrap " << _name
				<< " repaired itself for " << amount 
				<< " hit Points (hp=" << _hitPts
				<< "), lost -1 points of energie\n";
}

void	ClapTrap::setHitPoints(unsigned int hp) { _hitPts = hp; }
void	ClapTrap::setEnergyPoints(unsigned int ep) { _energiesPts = ep; }
void	ClapTrap::setAttackDamage(unsigned int dmg) { _attackDmg = dmg; }

