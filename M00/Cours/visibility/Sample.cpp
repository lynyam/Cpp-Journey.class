#include "Sample.hpp"

Sample::Sample(void) {
        std::cout << "Constructeur call" << std::endl;
		this->port = 8080;
		this->pub_fct();
		this->_pwd = 1234;
		this->_priv_creat();

}

Sample::~Sample(void) {
        std::cout << "Destructeur call" << std::endl;
}

void Sample::pub_fct(void) const {
	std::cout << "Call pub_fct" << std::endl;
	std::cout << "Port:" << this->port << std::endl;
}

void Sample::_priv_creat(void) const {
	std::cout << "Call _priv_creaat" << std::endl;
	std::cout << "_pwd : " << this->_pwd << std::endl;
}

