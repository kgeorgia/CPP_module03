#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string const &name ) : ScavTrap(), FragTrap(), Name(name)
{
	this->ClapTrap::Name = name + "_clap_name";
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
	std::cout << "DiamondTrap <" << Name << "> was created;" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other )
{
	Name = other.Name;
	this->ClapTrap::Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "DiamondTrap <" << Name << "> was created;" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap <" << Name << "> destructor called;" << std::endl;
}

DiamondTrap const	&DiamondTrap::operator=( DiamondTrap const &other )
{
	Name = other.Name;
	this->ClapTrap::Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

void	DiamondTrap::WhoAmI( void )
{
	std::cout << "My name is " << this->Name << ", my ClapTrap name is " << this->ClapTrap::Name << std::endl;
}