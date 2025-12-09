#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout	<< j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	
	delete (meta);
	delete (j);
	delete (i);

	std::cout	<< "=======Test for Wrong Case======\n";
	const WrongAnimal *gene = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();
	std::cout	<< gene->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	gene->makeSound(); //will output the generic sound! 
	wc->makeSound(); //generic sound!

	delete (gene);
	delete (wc);
	return 0;
}
