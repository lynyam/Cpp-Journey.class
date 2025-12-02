#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0) {
//	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int ival ) {
//	std::cout << "Int constructor called\n";
	_raw = static_cast<int64_t>(ival) << frbit;
}

Fixed::Fixed( const float fval ) {
//	std::cout << "Float constructor called\n";
	_raw = static_cast<int64_t>(roundf((long double)fval * (1 << frbit)));
}

Fixed::Fixed( const Fixed& cfx ) {
//	std::cout << "copy constructor called\n";
	*this = cfx;
}

Fixed&	Fixed::operator=( const Fixed& cfx ) {
//	std::cout << "Copy assignement operator called\n";
	this->_raw = cfx.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
//	std::cout << "Destructor called\n";
}

int64_t		Fixed::getRawBits( void ) const {	
	return _raw;
}

void		Fixed::setRawBits( int64_t const raw ) {
	_raw = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)((double)_raw) / (1 << frbit);
}

int		Fixed::toInt( void ) const {
	return _raw >> frbit;
}

std::ostream& operator<<( std::ostream& o, const Fixed& fx ) {
	o << fx.toFloat();
	return o;
}

//Comparison op
bool	Fixed::operator<( const Fixed& rfx ) const {
	return _raw < rfx.getRawBits();
}

bool	Fixed::operator>( const Fixed& rfx ) const {
	return rfx < *this;
}

bool	Fixed::operator<=( const Fixed& rfx ) const {

	return !(*this > rfx);
}

bool	Fixed::operator>=( const Fixed& rfx ) const {
	return !(rfx < *this);
}

bool	Fixed::operator==( const Fixed& rfx ) const {
	return _raw == rfx.getRawBits();
}

bool	Fixed::operator!=( const Fixed& rfx ) const {
	return !(*this == rfx);
}

//arithmetic op
Fixed	Fixed::operator+( const Fixed& rfx ) const {
	Fixed temp;
	temp.setRawBits( _raw + rfx.getRawBits() );
	return temp;
}	

Fixed	Fixed::operator-( const Fixed& rfx ) const {
	Fixed temp;
	temp.setRawBits( _raw - rfx.getRawBits() );
	return temp;
}

Fixed	Fixed::operator*( const Fixed& rfx ) const {
	Fixed temp;
	temp.setRawBits( (_raw * rfx.getRawBits()) >> frbit);
	return temp;
}

Fixed	Fixed::operator/( const Fixed& rfx ) const {
	Fixed temp;
	temp.setRawBits( (_raw / rfx.getRawBits()) * (1 << frbit) );
	return temp;
}

//pre incr decr

Fixed&	Fixed::operator++() {
	_raw += 1;
	return *this;

}

Fixed&	Fixed::operator--() {
	_raw -= 1;
	return *this;
}

//post incr decr
Fixed	Fixed::operator++( int ) {
	Fixed f( *this );
	_raw += 1;
	return f;
}

Fixed	Fixed::operator--( int ) {
	Fixed f( *this );
	_raw -= 1;
	return f;
}

//static min man
Fixed&  Fixed::min(Fixed& f1, Fixed& f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed&  Fixed::min(const Fixed& f1, const Fixed& f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed&  Fixed::max(Fixed& f1, Fixed& f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed&  Fixed::max(const Fixed& f1, const Fixed& f2) {
	return f1 > f2 ? f1 : f2;
}
