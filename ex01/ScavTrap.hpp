/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:43:20 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 19:18:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

# include "ClapTrap.hpp"

#define YELLOW_BLINK "\033[5;33m"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(std::string name = "no_name");
		ScavTrap(ScavTrap const & toCopy);

		~ScavTrap(void);

		ScavTrap & operator = (ScavTrap const & toAssign);

		void attack(const std::string& target);

		void guardGate(void);

};

#endif
