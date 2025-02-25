/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:43:20 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 23:23:09 by svogrig          ###   ########.fr       */
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

		virtual ~ScavTrap(void);

		ScavTrap & operator = (ScavTrap const & toAssign);

		void attack(const std::string& target);

		void guardGate(void);

	protected:

		static t_ui _initHit;
		static t_ui _initEnergy;
		static t_ui _initAttackDamage;

};

#endif
