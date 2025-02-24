/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:23:17 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 20:38:26 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << CYAN "FragTrap default constructor called : " RESET << _name << CYAN " is created" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy) : ClapTrap(toCopy)
{
	std::cout << CYAN "FragTrap copy constructor called" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << BLUE "FragTrap default destructor called" RESET;
	std::cout << " name: " << _name;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const & toAssign)
{
	std::cout << PURPLE "FragTrap copy assignment operator called" RESET << std::endl;
	if (this == &toAssign)
		return (*this);
	_name = toAssign._name;
	_hit = toAssign._hit;
	_energy = toAssign._energy;
	_attackDamage = toAssign._attackDamage;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << YELLOW_BLINK "FragTrap " RESET;
	std::cout << _name << YELLOW_BLINK " high five done" RESET << std::endl;
}
