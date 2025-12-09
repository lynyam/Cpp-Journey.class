#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

AMateria* gFloor[1000];
int gFloorIdx = 0;

void drop(AMateria* m)
{
	if (gFloorIdx < 1000)
	{
		gFloor[gFloorIdx] = m;
		gFloorIdx++;
	}
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	AMateria* dropped = ((Character*)me)->getMateria(0);
	me->unequip(0);
	drop(dropped);

	delete bob;
	delete me;
	delete src;

	int i = 0;
	while (i < gFloorIdx)
	{
		delete gFloor[i];
		i++;
	}	
	return 0;
}
