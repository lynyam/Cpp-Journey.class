#include <iostream>


int main(void)
{
    char buf[512];

    std::cout << "hello world!" << std::endl;
    std::cin >> buf;
    std::cout << "Vous avez entrer :[" << buf << "]" << std::endl;
    return (0);
}
