/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:55:32 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 17:55:33 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string const &name ) : ClapTrap(name)
{
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap <" << Name << "> was created;" << std::endl;
}

FragTrap::FragTrap( FragTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "FragTrap <" << Name << "> was created;" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap <" << Name << "> destructor called;" << std::endl;
}

FragTrap const	&FragTrap::operator=( FragTrap const &other )
{
	Name = other.getName();
	Hitpoints = other.getHitpoints();
	EnergyPoints = other.getEnergyPoints();
	AttackDamage = other.getAttackDamage();
	std::cout << "Operator overload called;" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap <" << Name << "> high fived!" << std::endl;
}