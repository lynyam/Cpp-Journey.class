#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		static const int size = 4;
		AMateria *_templates[size];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource& operator=( const MateriaSource& other );
		virtual ~MateriaSource();
		void learnMateria( AMateria* m);
		AMateria* createMateria( std::string const & type );
};
#endif
