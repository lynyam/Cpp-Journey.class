#include "Sample1.hpp"

Sample1::Sample1(char p1, int p2, float p3) {
        std::cout << "Constructeur call" << std::endl;
		this->p1 = p1;
		this->p2 = p2;
		this->p3 = p3;
		std::cout << "p1: " << this->p1 << std::endl;
		std::cout << "p2: " << this->p2 << std::endl;
		std::cout << "p3: " << this->p3 << std::endl;
}

Sample1::~Sample1(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample1::fct(void) {
	std::cout << "Call member fct";
}

