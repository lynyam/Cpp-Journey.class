#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private :
		std::string	_name;
		unsigned int			_hitPts;
		unsigned int			_energiesPts;
		unsigned int			_attackDmg;
	protected:
    	void	setHitPoints(unsigned int hp);
    	void	setEnergyPoints(unsigned int ep);
    	void	setAttackDamage(unsigned int dmg);
		bool	canAct( void ) const;
		void	logNoAction( void ) const;
	public :
		ClapTrap( void );
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& other );
		virtual ~ClapTrap( void );
		virtual void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		const std::string&	getName( void ) const;
		unsigned int	getHitPts( void ) const;
		unsigned int	getEnergiesPts( void ) const;
		unsigned int	getAttackDmg( void ) const;
};
#endif
