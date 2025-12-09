#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	private :
		std::string ideas[ 100 ];
		static unsigned int ideaSize;
	
	public :
		Brain( void );
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		virtual	~Brain( void );
		const std::string&	getIdea(const unsigned int index) const;
		bool	setIdea(const unsigned int index, const std::string& idea);
};
#endif
