/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:41:13 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 13:55:40 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const &name) : Name(name)
{
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap <" << Name << "> was created;" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "ClapTrap <" << Name << "> was created;" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap <" << Name << "> destructor called;" << std::endl;
}

ClapTrap const      &ClapTrap::operator=( ClapTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

std::string const   ClapTrap::getName( void ) const { return Name; }

unsigned int		ClapTrap::getHitpoints( void ) const { return Hitpoints; }

unsigned int		ClapTrap::getEnergyPoints( void ) const { return EnergyPoints; }

unsigned int		ClapTrap::getAttackDamage( void ) const { return AttackDamage; }

void				ClapTrap::attack( std::string const &target)
{
	std::cout << "ClapTrap <" << Name << "> attack <" << target
	<< ">, causing <" << AttackDamage << "> points of damage!" << std::endl;
}

void			   ClapTrap::takeDamage(unsigned int amount)
{
	Hitpoints = Hitpoints > amount ? Hitpoints - amount : 0;
	std::cout << "ClapTrap <" << Name << "> took <" << amount << "> points of damage!" << std::endl;
}

void			   ClapTrap::beRepaired(unsigned int amount)
{
	Hitpoints += amount;
	std::cout << "ClapTrap <" << Name << "> repaired <" << amount << "> hitpoints!" << std::endl;
}