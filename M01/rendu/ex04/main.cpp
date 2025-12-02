#include <string>
#include <fstream>
#include <iostream>

int main( int ac, char** av ) {
	if ( ac != 4 ) {
		std::cerr << "Usage: " << av[0]
				  << "<filename> <s1> <s2>\n";
		return 1;
	}
	std::string filename = av[1];
	std::string s1( av[2] );
	std::string s2( av[3] );
	std::string outname = filename + ".replace";	
	
	std::ifstream ifs( filename );
	if ( !ifs ) {
		std::cerr << "Error: Cannot open input file '"
				  << filename << "'\n";
		return 1;
	}
	std::ofstream ofs( outname );
	if ( !ofs ) {
		std::cerr <<  "Error: Cannot create output file '"
				  << outname << "'\n";
		return 1;
	}

	char c;
	std::string window;

	while ( ifs.get( c ) ) {
		window += c;
		while ( window.size() < s1.size() && ifs.get(c) )
		{
			window += c;
		}
		if ( window == s1 ) {
			ofs << s2;
			window.clear();
		} else {
			ofs << window[0];
			window.erase(0, 1);
		}
	}
	if ( !window.empty() )
		ofs << window;
	//ifs.close(); because of RAII
	//ofs.close();
	return (0);
}
