/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:23:44 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/06 22:12:19 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(std::string name = "no_name");
		FragTrap(FragTrap const & toCopy);

		~FragTrap(void);

		FragTrap & operator = (FragTrap const & toAssign);

		void highFiveGuys(void);

	protected:

		static const t_ui _initHit = 100;
		static const t_ui _initEnergy = 100;
		static const t_ui _initAttackDamage = 30;
		
};

#endif