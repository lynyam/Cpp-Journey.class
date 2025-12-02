#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
		this->port = 0000;
		std::cout << "Init this->port to: " << this->port << std::endl;
		std::cout << "Init this->fct [ ";
		this->fct();
		std::cout << "]" << std::endl;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::fct(void) {
	std::cout << "Call member fct";
}

