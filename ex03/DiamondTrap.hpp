/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:16:39 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/28 13:15:10 by svogrig          ###   ########.fr       */
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

		void whoAmI(void); 

	private:

		void display(std::ostream & os) const;

		std::string _name;

};

#endif