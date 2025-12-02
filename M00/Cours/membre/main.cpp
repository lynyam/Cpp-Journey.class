#include "Sample.hpp"

int main(void)
{
    Sample sl;
	sl.fct();
	sl.var = 8080;
	std::cout << "le port par default est généralement "
		<< sl.var << std::endl;
    return (0);
}
