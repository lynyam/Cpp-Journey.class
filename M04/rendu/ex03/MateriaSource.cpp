#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout	<< "[MateriaSource] Default Constructor.\n";
	int i = 0;
	while (i < size) {
		_templates[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource( void ) {
	int i = 0;
	while (i < size) {
		if (_templates[i])
			delete(_templates[i]);
		i++;
	}
	std::cout	<< "[MateriaSource] Destructor.\n";	
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	std::cout	<< "[MateriaSource] Copy Constructor.\n";
	int i = 0;
	while (i < size) {
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
		else
			_templates[i] = NULL;
		i++;
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other) {
		int i = 0;
		while (i < size) {
			if (_templates[i])
				delete _templates[i];
			if (other._templates[i])
				_templates[i] = other._templates[i]->clone();
			else
				_templates[i] = NULL;
			i++;
		}
	}
	return *this;
}

void 	MateriaSource::learnMateria( AMateria* m ) {
	if (!m)
		return;
	int i = 0;
	while (i < size)
	{
		if (_templates[i] == NULL)
		{
			_templates[i] = m->clone();
			break ;
		}
		i++;
	}
	delete m;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int i = 0;
	while (i < size)
	{
		if (_templates[i] && _templates[i]->getType() == type)
			return _templates[i]->clone();
		i++;
	}
	return NULL;
}
