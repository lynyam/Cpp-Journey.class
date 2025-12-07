#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	private :
		const int			_id;
		static int	count_id;
	public :
		Animal( void );
		int	getId( void ) const;
		virtual ~Animal( void );
		void	move( int distance ) const;
		void	eat( std::string food ) const;
		void	comunicate( void ) const ;
};

class Cat : public Animal {
	public :
		Cat( std::string name );
		Cat( void );
		~Cat( void );
		void	comunicate( void ) const;
		void	grimace( void ) const;
		std::string	getName( void ) const;

	private:
		std::string _name;
};
#endif
