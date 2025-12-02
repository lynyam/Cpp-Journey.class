#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
		_pwd = 0;
}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

int	Sample::getPwd(void) const {
	return this->_pwd;
}

void Sample::setPwd(int pwd) {
	if (pwd > 0)
		_pwd = pwd;
}

