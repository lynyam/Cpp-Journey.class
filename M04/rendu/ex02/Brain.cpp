#include "Brain.hpp"

unsigned int Brain::ideaSize = 100;

Brain::Brain() {
	std::cout	<< "[ Brain ] : Default Constructor \n";
}

Brain::Brain( const Brain& other ) {
	std::cout	<< "[ Brain ] : Copy Constructor \n";
	*this = other;
}

Brain&	Brain::operator=( const Brain& other ) {
	std::cout	<< "[ Brain ] : operator (=) \n";
	if (this != &other) {
		unsigned int i = 0;
		while (i < ideaSize) {
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain( void ) {
	std::cout	<< "[ Brain ] : Destructor \n";
}

const std::string&	Brain::getIdea(const unsigned int index) const {
	return ideas[index];
}

bool	Brain::setIdea(const unsigned int index, const std::string& idea) {
	if (index >= ideaSize) return false;
	ideas[index] = idea;
	return true;
}

