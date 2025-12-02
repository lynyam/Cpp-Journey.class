#include "Sample.hpp"

Sample::Sample(char p, int const port): p(p), port(port){
        std::cout << "Constructeur call" << std::endl;
		this->fct();
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::fct(void) const {
	std::cout << "Call member fct" << std::endl;
	std::cout << this->p << " : " << this->port << std::endl;
}

