#include "Harl.hpp"

Harl::Harl( void ) {}

void	Harl::debug ( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years, whereas you started working here just last month.\n\n";
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.\n\n";
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

Harl::Level	Harl::strToLevel( const std::string& level ) const {
	static const char * const levels[LEVEL_COUNT] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	int i = 0;
	while (i < LEVEL_COUNT) {
		if (level == levels[i])
			return static_cast<Level>(i);
		i++;
	}
	return LEVEL_COUNT;
}

void	Harl::complain( std::string level ) {
	switch (strToLevel(level)) {
		case DEBUG:
			debug();
			info();
			warning();
			error();
			break;
		case INFO:
			info();
			warning();
			error();
			break;
		case WARNING:
			warning();
			error();
			break;
		case ERROR:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
