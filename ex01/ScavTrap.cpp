/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:42:47 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 21:08:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
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

void ScavTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it has not enough energy!" RESET << std::endl;
		return ;
	}
	if (_hit == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it is destroy!" RESET << std::endl;
		return ;
	}
	_energy--;
	std::cout << GREY "ScavTrap " RESET << _name << GREY " attacks " RESET << target;
	std::cout << GREY ", causing " RESET << _attackDamage << GREY " points of damage!" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (_energy == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't switch to gate keeper mode ";
		std::cout << ", it has not enough energy!" RESET << std::endl;
		return ;
	}
	if (_hit == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't switch to gate keeper mode ";
		std::cout << ", it is destroy!" RESET << std::endl;
		return ;
	}
	std::cout << YELLOW_BLINK "ScavTrap " RESET;
	std::cout << _name << YELLOW_BLINK " is now in gate keeper mode" RESET << std::endl;
}
