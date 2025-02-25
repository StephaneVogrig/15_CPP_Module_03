/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:23:44 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 23:47:08 by svogrig          ###   ########.fr       */
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

		virtual ~FragTrap(void);

		FragTrap & operator = (FragTrap const & toAssign);

		void highFiveGuys(void);

	protected:

		static t_ui _initHit;
		static t_ui _initEnergy;
		static t_ui _initAttackDamage;
		
};

#endif