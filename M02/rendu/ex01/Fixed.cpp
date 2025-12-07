#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int ival ) {
	std::cout << "Int constructor called\n";
	_raw = ival << frbit;
}

Fixed::Fixed( const float fval ) {
	std::cout << "Float constructor called\n";
	_raw = static_cast<int>(roundf(fval * (1 << frbit)));
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
	return _raw;
}

void		Fixed::setRawBits( int const raw ) {	
	std::cout << "Default constructor called\n";
	_raw = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)_raw) / (1 << frbit);
}

int		Fixed::toInt( void ) const {
	return _raw >> frbit;
}

std::ostream& operator<<( std::ostream& o, const Fixed& fx ) {
	o << fx.toFloat();
	return o;
}
