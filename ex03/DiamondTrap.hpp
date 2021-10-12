#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string Name;

	public:
		DiamondTrap( std::string const &name = "Noname" );
		DiamondTrap( DiamondTrap const &other );
		~DiamondTrap( void );

		DiamondTrap const	&operator=( DiamondTrap const &other );

		void	WhoAmI( void );
};

#endif