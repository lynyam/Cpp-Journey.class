#include "Sample.hpp"

int foo(int c) {
	std::cout << "on est dans int foo(int c) :" << c << ";\n";
	return c + 2;
}

long foo(long c) {
	std::cout << "on est dans char foo(char c) :" << c << ";\n";
	return c - 32;
}



int main() {
	Sample s;
	Sample *ptr = &s;
	s.bar(1, ptr);
	s.bar(2);
	s.bar('E');
	s.bar(3.14f);
	std::cout << "appel de foo(1) ==> " << foo('A');
	std::cout << "appel de foo('D') ==> " << foo('d');
	return 0;
}
