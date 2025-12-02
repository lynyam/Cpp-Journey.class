#include "Sample2.hpp"

Sample2::Sample2(char p1, int p2, float p3): p1(p1), p2(p2), p3(p3) {
        std::cout << "Constructeur call" << std::endl;
		std::cout << "p1: " << this->p1 << std::endl;
		std::cout << "p2: " << this->p2 << std::endl;
		std::cout << "p3: " << this->p3 << std::endl;
}

Sample2::~Sample2(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample2::fct(void) {
	std::cout << "Call member fct";
}

