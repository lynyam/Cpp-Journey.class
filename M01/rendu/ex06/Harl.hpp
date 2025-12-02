#ifndef _HARL_H_
# define _HARL_H_

#include <iostream>
#include <string>
class Harl {
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		enum Level {
				DEBUG,
				INFO,
				WARNING,
				ERROR,
				LEVEL_COUNT
		};
		Level strToLevel( const std::string& level ) const;
	public :
		void	complain( std::string level );
		Harl();
};

#endif
