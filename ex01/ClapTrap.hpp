/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:24:47 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 13:02:45 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string			Name;
		unsigned int		Hitpoints;
		unsigned int		EnergyPoints;
		unsigned int		AttackDamage;

	public:
		ClapTrap( std::string const &name = "Noname" );
		ClapTrap( ClapTrap const &other );
		~ClapTrap( void );

		ClapTrap const		&operator=( ClapTrap const &other );

		std::string const	getName( void ) const;
		unsigned int		getHitpoints( void ) const;
		unsigned int		getEnergyPoints( void ) const;
		unsigned int		getAttackDamage( void ) const;

		void				attack( std::string const &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};

#endif