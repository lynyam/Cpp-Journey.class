#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {

	//{
	//	std::cout << "\n===== TEST 0 : CREATION de classe Animal Error car abstraite =====\n";
	//	Animal a;
	//	Animal *b = new Animal();
	//}

	std::cout << "\n===== TEST 1 : CREATION / DESTRUCTION D'UN TABLEAU D'ANIMAUX =====\n";

	const int size = 10;
	Animal* animals[size];

	int i = 0;
	while (i < size) {
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}

	std::cout << "\n===== TEST 2 : DESTRUCTION POLYMORPHIQUE =====\n";

	i = 0;
	while (i < size) {
		delete animals[i];
		i++;
	}


	std::cout << "\n===== TEST 3 : DEEP COPY DOG =====\n";

	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "I love bones!");
	originalDog.getBrain()->setIdea(1, "I want food.");

	Dog copiedDog(originalDog); // constructeur par copie

	std::cout << "Original idea[0] = " 
		<< originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied   idea[0] = "
		<< copiedDog.getBrain()->getIdea(0) << std::endl;

	// modifier la copie uniquement
	copiedDog.getBrain()->setIdea(0, "I changed this!");

	std::cout << "\nAprès modification de la copie :\n";
	std::cout << "Original idea[0] = " 
		<< originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied   idea[0] = "
		<< copiedDog.getBrain()->getIdea(0) << std::endl;

	if (originalDog.getBrain()->getIdea(0) != copiedDog.getBrain()->getIdea(0))
		std::cout << "Deep copy OK : brains indépendants\n";
	else
		std::cout << "Shallow copy : brains partagés !\n";


	std::cout << "\n===== TEST 4 : DEEP COPY CAT =====\n";

	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "I hate humans sometimes.");
	originalCat.getBrain()->setIdea(1, "I want to sleep.");

	Cat copiedCat(originalCat);

	std::cout << "Original idea[0] = "
		<< originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied   idea[0] = "
		<< copiedCat.getBrain()->getIdea(0) << std::endl;

	copiedCat.getBrain()->setIdea(0, "I changed this too!");

	std::cout << "\nAprès modification de la copie :\n";
	std::cout << "Original idea[0] = "
		<< originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied   idea[0] = "
		<< copiedCat.getBrain()->getIdea(0) << std::endl;

	if (originalCat.getBrain()->getIdea(0) != copiedCat.getBrain()->getIdea(0))
		std::cout << "Deep copy OK : brains indépendants\n";
	else
		std::cout << "Shallow copy détectée !\n";


	std::cout << "\n===== FIN DES TESTS =====\n";

	return 0;
}

