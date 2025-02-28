/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:42:47 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/28 11:54:35 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* constructor ---------------------------------------------------------------*/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << CYAN "ScavTrap default constructor called : " RESET;
	std::cout << _name << CYAN " is created " RESET << *this << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy) : ClapTrap(toCopy)
{
	std::cout << CYAN "ScavTrap copy constructor called " RESET << *this << std::endl;
}

/* destructor ----------------------------------------------------------------*/

ScavTrap::~ScavTrap(void)
{
	std::cout << BLUE "ScavTrap default destructor called " RESET << *this << std::endl;
}

/* operator ------------------------------------------------------------------*/

ScavTrap & ScavTrap::operator = (ScavTrap const & toAssign)
{
	std::cout << PURPLE "ScavTrap copy assignment operator called " RESET << *this << std::endl;
	if (this == &toAssign)
		return (*this);
	ClapTrap::operator = (toAssign);
	return (*this);
}

/* public utilities ----------------------------------------------------------*/

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoint == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it has not enough energy! " RESET << *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it is destroy! " RESET << *this << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout << GREY "ScavTrap " RESET << _name << GREY " attacks " RESET << target;
	std::cout << GREY ", causing " RESET << _attackDamage << GREY " points of damage! " RESET;
	std::cout << *this << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (_energyPoint == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't switch to gate keeper mode ";
		std::cout << ", it has not enough energy! " RESET << *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout << RED "ScavTrap " RESET << _name << RED " can't switch to gate keeper mode ";
		std::cout << ", it is destroy! " RESET << *this << std::endl;
		return ;
	}
	std::cout << YELLOW_BLINK "ScavTrap " RESET;
	std::cout << _name << YELLOW_BLINK " is now in gate keeper mode! " RESET << *this << std::endl;
}
