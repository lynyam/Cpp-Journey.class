#include "Sample.hpp"

Sample::Sample( void ) {
	std::cout << "Call Constructeur \n";
}

Sample::~Sample( void ) {
	std::cout << "Call Destructeur \n";
}

void Sample::bar(const char c) {
	std::cout << "const char c = " << c << ";\n";	
}

void Sample::bar(const int c) {
	std::cout << "const int c = " << c << ";\n";	
}

void Sample::bar(const float c) {
	std::cout << "const float c = " << c << ";\n";	
}

void Sample::bar(const int a, const Sample *c) {
	std::cout << "const int a = " << a << ";\n";
	std::cout << "const Sample adresse c = " << c << ";\n"; 
}
