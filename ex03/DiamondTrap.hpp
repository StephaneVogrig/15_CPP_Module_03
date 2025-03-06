/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:16:39 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/06 22:53:44 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap(std::string name = "noNameDiamond");
		DiamondTrap(DiamondTrap const & toCopy);

		~DiamondTrap(void);

		DiamondTrap & operator = (DiamondTrap const & toAssign);

		std::string	getName(void) const;

		void whoAmI(void); 

	private:

		std::string _name;

};

std::ostream & operator << (std::ostream & os, DiamondTrap const & obj);

#endif
