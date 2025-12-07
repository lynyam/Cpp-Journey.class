#include "Animal.hpp"

int main() {
	std::cout << "=========================\n";
	std::cout << "case of base class Animal\n";
	std::cout << "=========================\n";
	Animal random;
	random.move(5);
	random.eat("Random  food");
	random.comunicate();
	std::cout << "=========================\n";
	std::cout << "case of Cat class Animal\n";
	std::cout << "=========================\n";
	Cat cat("Mimi");
	cat.move(10);
	cat.eat("petit pods");
	cat.comunicate();
	cat.grimace();
	std::cout << "=========================\n";
	std::cout << "case of Cat avec  =  class Animal\n";
	std::cout << "=========================\n";
	Animal catE =  Cat("Mimi");
	catE.move(15);
	catE.eat("thon");
	catE.comunicate();
	catE.grimace();

	return (0);
}
