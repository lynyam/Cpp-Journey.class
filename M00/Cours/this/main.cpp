#include "Sample.hpp"

int main(void)
{
    Sample sl;
	sl.port = 8080;
	std::cout << "default port change to: "
		<< sl.port << std::endl;
    return (0);
}
