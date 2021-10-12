/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:19:21 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 14:02:09 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string const &name ) : ClapTrap(name)
{
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap <" << Name << "> was created;" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "ScavTrap <" << Name << "> was created;" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap <" << Name << "> destructor called;" << std::endl;
}

ScavTrap const	&ScavTrap::operator=( ScavTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap <" << Name << "> have enterred in Gate keeper mode." << std::endl;
}