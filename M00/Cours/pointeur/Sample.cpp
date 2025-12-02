#include "Sample.hpp"

Sample::Sample(int port): port(port){
        std::cout << "Constructeur call" << std::endl;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::fct(void) const {
	std::cout << "Call member fct" << std::endl;
}

