#include "Sample.hpp"

int main(void)
{
    Sample sl(8080);
	Sample s2(7000);
	Sample *pSl = &sl;
	std::cout << "pSl->port = " << pSl->port << std::endl;

	//declaration de pointeur sur menbre et de pointeur sur fonction menbre
	int Sample::*pPort = NULL;
	std::cout << "pPort = " << pPort << std::endl;
	pPort = &Sample::port;
	void (Sample::*pf)(void) const = &Sample::fct;
	std::cout << "pPort = " << pPort << std::endl;
	std::cout << "pf = " << pf << std::endl;

	sl.*pPort = 3000;
	s2.*pPort = 4000;
	std::cout << "pPort = " << pPort << std::endl;
	std::cout << "s2.port = " << s2.port << std::endl;
	std::cout << "sl.port = " << sl.port << std::endl;
	pSl->*pPort = 2999;
	std::cout << "pSl->port = " << pSl->port << std::endl;
	(sl.*pf)();
	(&sl->*pf)();
	
    return (0);
}
