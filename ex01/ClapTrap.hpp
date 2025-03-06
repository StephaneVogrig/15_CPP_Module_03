/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:59 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/06 12:24:25 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define GREY "\033[37m"
# define RESET "\033[0m"
# define YELLOW_BLINK "\033[5;33m"

/*
	default constructor :
	https://en.cppreference.com/w/cpp/language/default_constructor
*/

typedef unsigned int t_ui;

class ClapTrap
{
	public:

		ClapTrap(std::string name = "no_name");
		ClapTrap(ClapTrap const & toCopy);

		~ClapTrap(void);

		ClapTrap & operator = (ClapTrap const & toAssign);

		std::string	getName(void) const;
		t_ui		getHitPoint(void) const;
		t_ui		getEnergyPoint(void) const;
		t_ui		getAttackDamage(void) const;

		void attack(const std::string& target);
		void takeDamage(t_ui amount);
		void beRepaired(t_ui amount);

	protected:

		ClapTrap(std::string name, t_ui hit, t_ui energy, t_ui attackDamage);

		std::string	_name;
		t_ui		_hitPoint;
		t_ui		_energyPoint;
		t_ui		_attackDamage;

};

std::ostream & operator << (std::ostream & os, ClapTrap const & obj);

#endif
