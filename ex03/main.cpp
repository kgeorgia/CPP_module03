/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:55:38 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 19:12:36 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap A;
	DiamondTrap B("Another");

	A.attack("target");
	B.attack("Another targer");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.highFivesGuys();
	A.guardGate();
	B.highFivesGuys();
	B.guardGate();

	A.WhoAmI();
	B.WhoAmI();

	return (0);
}