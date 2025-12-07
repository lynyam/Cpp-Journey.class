#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample {
	public :
		Sample( void );//canonical
		Sample ( int v );
		Sample ( const Sample& sc );
		~Sample (void ); //canonical
		int getValue( void ) const;
		int getC( void ) const;
		void setC( int c );
		Sample operator+( const Sample& rop ) const;
		Sample& operator=( const Sample& rop );//canonical

	private :
		int _value;
		int _c;
};

std::ostream& operator<<( std::ostream& o, const Sample& rop );
#endif
