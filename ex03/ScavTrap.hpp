/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:43:20 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/06 22:12:34 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap(std::string name = "no_name");
		ScavTrap(ScavTrap const & toCopy);

		~ScavTrap(void);

		ScavTrap & operator = (ScavTrap const & toAssign);

		void attack(const std::string& target);

		void guardGate(void);

	protected:

		static const t_ui _initHit = 100;
		static const t_ui _initEnergy = 50;
		static const t_ui _initAttackDamage = 20;

};

#endif
