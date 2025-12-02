#include "Sample.hpp"

void f1(void) {
	Sample s1;
    std::cout << "f1 start: nbre Instance nbrInst = " << Sample::getNbrInst() << std::endl;//2
}//2-1 =1


void f0(void) {
	Sample s1;
    std::cout << "f0 start: nbre Instance nbrInst = " << Sample::getNbrInst() << std::endl;//1
	f1();
    std::cout << "f0 End: nbre Instance nbrInst = " << Sample::getNbrInst() << std::endl;//1
}

int main(void)
{
    std::cout << "Main start : nbre Instance nbrInst = " << Sample::getNbrInst() << std::endl; //0
	f0();
    std::cout << "Main End: nbre Instance nbrInst = " << Sample::getNbrInst() << std::endl;//0
    return (0);
}
