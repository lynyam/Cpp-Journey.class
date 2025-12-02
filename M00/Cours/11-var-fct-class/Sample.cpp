#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
		_nbrInst += 1;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
		Sample::_nbrInst -= 1;
}

int	Sample::getNbrInst(void) {
	return Sample::_nbrInst;
}
int Sample::_nbrInst = 0;

