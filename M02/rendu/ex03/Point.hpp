#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class	Point {
	private :
		const Fixed	_x;
		const Fixed	_y;

	public :
		Point( void );
		Point( const float x, const float y );
		Point( const Point& p );
		Point&	operator=( const Point& p );
		~Point( void );
		const Fixed getX( void ) const;
		const Fixed getY( void ) const;
};
bool	bsp(const Point& a, const Point& b, const Point& c, const Point& p);
#endif
