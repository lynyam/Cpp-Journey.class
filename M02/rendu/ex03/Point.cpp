#include "Point.hpp"
#include "Fixed.hpp"

Point::Point( void ) : _x(0), _y(0) {
//	std::cout << "dafault Constructor called\n";
}

Point::Point( const float x, const float y ) : _x(Fixed( x )), _y( Fixed( y )) {
//	std::cout << "param Constructor Called\n";
}

Point::Point( const Point& p ) : _x( p.getX() ), _y( p.getY() ) {
//	std::cout << "copy constructor Called\n";
}

Point::~Point( void ) {
//	std::cout << "destructor call\n";
}

Point&	Point::operator=( const Point& p ) {
	(void)p;
	return *this;
}

const Fixed	Point::getX( void ) const {
	return _x;
}

const Fixed Point::getY( void ) const {
	return _y;
}

