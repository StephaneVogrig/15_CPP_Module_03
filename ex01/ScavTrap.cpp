/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:42:47 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 18:31:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << CYAN "ScavTrap default constructor called : " RESET << _name << CYAN " is created" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy) : ClapTrap(toCopy)
{
	std::cout << CYAN "ScavTrap copy constructor called" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << BLUE "ScavTrap default destructor called" RESET;
	std::cout << " name: " << _name;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & toAssign)
{
	std::cout << PURPLE "ScavTrap copy assignment operator called" RESET << std::endl;
	if (this == &toAssign)
		return (*this);
	_name = toAssign._name;
	_hit = toAssign._hit;
	_energy = toAssign._energy;
	_attackDamage = toAssign._attackDamage;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << YELLOW_BLINK "ScavTrap " RESET;
	std::cout << _name << YELLOW_BLINK " is now in gate keeper mode" RESET << std::endl;
}
