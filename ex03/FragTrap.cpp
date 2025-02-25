/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:23:17 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 21:43:36 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

t_ui FragTrap:: _initHit = 100;
t_ui FragTrap:: _initEnergy = 100;
t_ui FragTrap:: _initAttackDamage = 30;

FragTrap::FragTrap(std::string name) : ClapTrap(name, _initHit, _initEnergy, _initAttackDamage)
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
	if (_energy == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't high five ";
		std::cout << ", it has not enough energy!" RESET << std::endl;
		return ;
	}
	if (_hit == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't high five ";
		std::cout << ", it is destroy!" RESET << std::endl;
		return ;
	}
	std::cout << YELLOW_BLINK "FragTrap " RESET;
	std::cout << _name << YELLOW_BLINK " high five done" RESET << std::endl;
}
