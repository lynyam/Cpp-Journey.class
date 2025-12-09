#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	
	public :
		Dog( void );
		Dog( const Dog& other );
		Dog( std::string type );
		Dog& operator=( const Dog& other );
		virtual ~Dog( void );
		virtual void	makeSound( void ) const;
		Brain*	getBrain( void ) const;

	private :
		Brain	*_brain;
};
#endif
