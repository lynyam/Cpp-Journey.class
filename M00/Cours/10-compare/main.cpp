#include "Sample.hpp"

int main(void)
{
    Sample s1;
	Sample s2;
	s1.setPwd(23);
	//std::cout << "s1 = [" << s1 << "]" << std::endl;
	//std::cout << "s2 = [" << s2 << "]" << std::endl;
	
	if (&s1 == &s2)
		std::cout << "s1 and s2 are physically identicals" << std::endl;
	else
		std::cout << "s1 and s2 not physically identicals" << std::endl;
	
	if (!s1.compare(&s2))
		std::cout << "s1 and s2 are structural identicals" << std::endl;
	else
		std::cout << "s1 and s2 not structural identicals" << std::endl;

	s2.setPwd(23);
	std::cout << "s2.pwd:" << s2.getPwd() << std::endl;
	std::cout << "After modification of s2" << std::endl;
	if (!s1.compare(&s2))
		std::cout << "s1 and s2 are structural identicals" << std::endl;
	else
		std::cout << "s1 and s2 not structural identicals" << std::endl;
    return (0);
}
