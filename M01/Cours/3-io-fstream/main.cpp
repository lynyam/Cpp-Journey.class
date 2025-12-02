#include <iostream>
#include <fstream>
int main() {
	std::ifstream ifs("number");
	unsigned int t1;
	unsigned int t2;
	ifs >> t1;
	ifs >> t2;

	std::cout << "t1 = " << t1 << " t2 = " << t2 << std::endl;
	ifs.close();
	std::ofstream ofs("test.txt");
	ofs << "I am a millionnaire";
	ofs.close();

}
