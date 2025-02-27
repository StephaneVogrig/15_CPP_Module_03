/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:43:20 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/27 23:46:24 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(std::string name = "no_name");
		FragTrap(FragTrap const & toCopy);

		~FragTrap(void);

		FragTrap & operator = (FragTrap const & toAssign);

		void highFiveGuys(void);

};

#endif
