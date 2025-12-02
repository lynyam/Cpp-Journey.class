#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed	{
	private:
		int64_t _raw;
		static const int frbit = 8;

	public :
		Fixed( void );
		Fixed( const int ival );
		Fixed( const float fval );
		Fixed( const Fixed& cfx );
		Fixed&	operator=( const Fixed& cfx );
		~Fixed( void );
		int64_t		getRawBits( void ) const;
		void	setRawBits( int64_t const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		//comparison op
		bool	operator<(const Fixed& rfx) const;
		bool	operator>(const Fixed& rfx) const;
		bool	operator<=(const Fixed& rfx) const;
		bool	operator>=(const Fixed& rfx) const;
		bool	operator==(const Fixed& rfx) const;
		bool	operator!=(const Fixed& rfx) const;
		//arithmetic op
		Fixed	operator+(const Fixed& rfx) const;
		Fixed	operator-(const Fixed& rfx) const;
		Fixed	operator*(const Fixed& rfx) const;
		Fixed	operator/(const Fixed& rfx) const;
		//pre incr decr
		Fixed&	operator++();
		Fixed&	operator--();
		//post incr decr
		Fixed	operator++(int);
		Fixed	operator--(int);
		//static min max
		static Fixed&	min(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};
std::ostream& operator<<( std::ostream& o, const Fixed& fx );

#endif
