/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:54:35 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/11 18:51:22 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( std::string const &name = "Noname" );
		FragTrap( FragTrap const &other );
		~FragTrap( void );

		FragTrap const	&operator=( FragTrap const &other );

		void	highFivesGuys( void );
};

#endif