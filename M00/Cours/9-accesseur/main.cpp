#include "Sample.hpp"

int main(void)
{
    Sample sl;
	std::cout << "getPwd after init : " << sl.getPwd() << std::endl;
	sl.setPwd(23);
	std::cout << "getPwd after set positif : " << sl.getPwd() << std::endl;
	sl.setPwd(-23);
	std::cout << "getPwd after set neg : " << sl.getPwd() << std::endl;
    return (0);
}
