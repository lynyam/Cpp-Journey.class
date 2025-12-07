#include "Animal.hpp"

int	Animal::count_id = 0;
Animal::Animal( void ) : _id(++count_id) {
	std::cout << "Animal id :" << getId() << " Constructeur call \n";
}
Animal::~Animal( void ) {
	std::cout << "Animal id :" << getId() << " Destructor call \n";
}
void	Animal::move( int distance ) const {
	std::cout << "animal id :" << getId() << " move distance : " << distance << " mm" << std::endl;
}
void	Animal::eat( std::string food ) const {
	std::cout << "animal id :" << getId() << " eat food: " << food << std::endl;
}

void	Animal::comunicate( void ) const {
	std::cout << "animal id :" << getId() << " comunicate with samblable " << std::endl;
}

int	Animal::getId( void ) const {
	return _id;
}

