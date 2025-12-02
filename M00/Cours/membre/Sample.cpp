#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::fct(void) {
	std::cout << "Call member fct" << std::endl;
}

