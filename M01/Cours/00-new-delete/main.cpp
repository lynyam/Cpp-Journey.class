#include "Student.hpp"

int	main() {
	Student s1( "lnyamets" );
	//Student s[10];
	Student *s3 = new Student[3];
	Student *s2 = new Student( "ynyamets" );
	delete (s2);
	delete [] s3;
}
