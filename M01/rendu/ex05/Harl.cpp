#include "Harl.hpp"

Harl::Harl( void ) {
	_ptr[ DEBUG ] = &Harl::debug;
	_ptr[ INFO ] = &Harl::info;
	_ptr[ WARNING ] = &Harl::warning;
	_ptr[ ERROR ] = &Harl::error;
}

void	Harl::debug ( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \n";
	std::cout << "I've been coming for years, whereas you started working here just last month.\n";
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.  ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Level	Harl::strToLevel( const std::string& level ) const {
	static const char * const levels[LEVEL_COUNT] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	int i = 0;
	while (i < LEVEL_COUNT) {
		if (levels[i] == level)
			return static_cast<Level>(i);
		i++;
	}
	return ERROR;
}

void	Harl::complain( std::string level ) {
	(this->*_ptr[strToLevel( level )])();
}
