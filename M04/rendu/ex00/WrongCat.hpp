#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
	public :
		WrongCat( void );
		WrongCat( WrongCat& other );
		WrongCat( std::string type );
		WrongCat& operator=( const WrongCat& other );
		~WrongCat( void );
		void	makeSound( void ) const;
};
#endif
