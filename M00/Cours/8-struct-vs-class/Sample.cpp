#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::pub_fct(void) const {
	std::cout << "Call pub_fct" << std::endl;
}
