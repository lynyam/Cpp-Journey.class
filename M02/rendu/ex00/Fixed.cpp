#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed& cfx ) {
	std::cout << "copy constructor called\n";
	*this = cfx;
}

Fixed&	Fixed::operator=( const Fixed& cfx ) {
	std::cout << "Copy assignement operator called\n";
	this->_raw = cfx.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits( void ) const {	
	std::cout << "getRawBits member function called\n";
	return _raw;
}

void		Fixed::setRawBits( int const raw ) {	
	std::cout << "Default constructor called\n";
	_raw = raw;
}
