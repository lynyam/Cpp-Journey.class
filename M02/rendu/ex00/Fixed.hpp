#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed	{
	private:
		int _raw;
		static const int frbit = 8;

	public :
		Fixed( void );
		Fixed( const Fixed& cfx );
		Fixed&	operator=( const Fixed& cfx );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
