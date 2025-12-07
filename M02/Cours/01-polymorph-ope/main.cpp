#include "Sample.hpp"

int main() {
	Sample s1;
	Sample s2(4);
	s2.setC(3);
	Sample s3;
	s3 = s1 + s2;
	Sample s4(s2);
	std::cout << s1 << "\n";
	std::cout << s2 << "\n";
	std::cout << s3 << "\n";
	std::cout << s4 << "\n";

	//std::cout << "s4 value is v = " << s4.getValue() << "\nAnd c = " << s4.getC() << std::endl;
	return (0);
}
