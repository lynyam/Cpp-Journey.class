#include <iostream>
#include <cctype>
#include <string>

std::string toupperCase(const std::string arg) {
	std::size_t i = 0;
	std::string upper;
	upper.reserve(arg.length());
	while (i < arg.length()) {
		upper.push_back(std::toupper(static_cast<unsigned char>(arg.at(i))));
		i++;
	}
	return upper;
}

int main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 1;
	while (i < ac) {
		std::cout << toupperCase(std::string(av[i]));
		i++;
	}
	std::cout << std::endl;
	return (0);
}
