#include "Character.hpp"

Character::Character( void ) : _name("UNKNOWN") {
	std::cout	<< "[Character] Default Constructor for "
				<< _name << ".\n";
	int i = 0;
	while (i < size) {
		_invent[i] = NULL;
		i++;
	}
}

Character::~Character( void ) {
	int i = 0;
	while (i < size) {
		if (_invent[i])
			delete(_invent[i]);
		i++;
	}
	std::cout	<< "[Character] Destructor for "
				<< _name << ".\n";	
}

Character::Character( const std::string name ) : _name( name ) {
	std::cout	<< "[Character] Constructor for "
				<< _name << ".\n";
	int i = 0;
	while (i < size) {
		_invent[i] = NULL;
		i++;
	}
}

Character::Character( const Character& other ) : _name(other._name) {
	std::cout	<< "[Character] Copy Constructor for "
				<< other._name << ".\n";
	int i = 0;
	while (i < size) {
		if (other._invent[i])
			_invent[i] = other._invent[i]->clone();
		else
			_invent[i] = NULL;
		i++;
	}
}

Character&	Character::operator=( const Character& other ) {
	if (this != &other) {
		int i = 0;
		while (i < size) {
			if (_invent[i])
				delete _invent[i];
			if (other._invent[i])
				_invent[i] = other._invent[i]->clone();
			else
				_invent[i] = NULL;
			i++;
		}
		_name = other._name;
	}
	return *this;
}

std::string	const & Character::getName( void ) const {
	return _name;
}

void	Character::equip( AMateria* m ) {
	if (!m)
		return;
	int i = 0;
	while (i < size) {
		if (_invent[i] == NULL) {
			_invent[i] = m;
			return ;
		}
		i++;
	}
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx < size)
		_invent[idx] = NULL;
}

void	Character::use( int idx, ICharacter&  target ) {
	if (idx >= 0 && idx < size && _invent[idx])
		_invent[idx]->use(target);
}

AMateria*	Character::getMateria(int idx) const {
	if (idx < 0 || idx >= 4)
		return 0;
	return _invent[idx];
}

