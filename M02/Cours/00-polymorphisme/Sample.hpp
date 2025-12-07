#ifndef SAMPLE_HPP_
# define SAMPLE_HPP_

#include <iostream>

class Sample {
	public :
		Sample( void );
		~Sample( void );
		void bar( const char c );
		void bar( const int c );
		void bar( const float c );
		void bar( const int a, const Sample *c );
};
#endif
