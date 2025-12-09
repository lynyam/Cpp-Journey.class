#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
	
	public :
		Cat( void );
		Cat( Cat& other );
		Cat( std::string type );
		Cat& operator=( const Cat& other );
		virtual ~Cat( void );
		virtual void	makeSound( void ) const;
};
#endif
