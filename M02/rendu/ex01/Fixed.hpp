#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed	{
	private:
		int _raw;
		static const int frbit = 8;

	public :
		Fixed( void );
		Fixed( const int ival );
		Fixed( const float fval );
		Fixed( const Fixed& cfx );
		Fixed&	operator=( const Fixed& cfx );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};
std::ostream& operator<<( std::ostream& o, const Fixed& fx );
#endif
