#include "Student.hpp"

void	printRef(Student& refS1) {
	std::cout << "on est dans printRef" << std::endl;
	std::cout << "sizeof(Student&) est : " << sizeof(Student&)<< std::endl;
	std::cout << "sizeof(refS1) est : " << sizeof(refS1)<< std::endl;
}

int	main() {
	Student s1( "lnyamets" );
	Student *s2 = new Student ( "ynyamets");
	Student& refS1 = s1;
	//Student *ps2 = &s2;
	
	std::cout << "sizeof(refS1) est : " << sizeof(refS1)<< std::endl;
	std::cout << "sizeof(s1) est : " << sizeof(s1)<< std::endl;
	std::cout << "sizeof(Student&) est : " << sizeof(Student&)<< std::endl;
	std::cout << "sizeof(s2) est : " << sizeof(s2)<< std::endl;
	std::cout << "sizeof(student *) est : " << sizeof(Student *)<< std::endl;
	refS1.getLogin() = "bobo";
	std::cout << "lnyamets est : " << s1.getLogin() << std::endl;
	s2->getLogin() = "bobo";
	std::cout << "ynyamest est : " << s2->getLogin() << std::endl;
	printRef(refS1);
	delete (s2);
}
