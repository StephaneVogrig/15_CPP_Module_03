/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:59 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 17:42:16 by svogrig          ###   ########.fr       */
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

/*
	default constructor :
	https://en.cppreference.com/w/cpp/language/default_constructor
*/

class ClapTrap
{
	public:

		ClapTrap(std::string name = "no_name");
		ClapTrap(ClapTrap const & toCopy);

		virtual ~ClapTrap(void);

		ClapTrap & operator = (ClapTrap const & toAssign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:

		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attackDamage;

};

#endif