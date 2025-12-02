#include "Harl.hpp"

int main( int ac, char **av ) {

	int i = 1;
	Harl h;

	while ( i < ac ) {
		std::string level = av[i];
		h.complain( level );
		i++;
	}
	return 0;
}
