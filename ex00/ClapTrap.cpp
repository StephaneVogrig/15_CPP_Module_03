/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:28:35 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 18:41:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructor ---------------------------------------------------------------*/

ClapTrap::ClapTrap(std::string name) :	_name(name),
										_hit(10),
										_energy(10),
										_attackDamage(0)
{
	std::cout << CYAN "CalTrap default constructor called : " RESET << _name << CYAN " is created" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	std::cout << CYAN "CalTrap copy constructor called" RESET << std::endl;
	*this = toCopy;
}

/* destructor ----------------------------------------------------------------*/

ClapTrap::~ClapTrap(void)
{
	std::cout << BLUE "CalTrap default destructor called" RESET;
	std::cout << " name: " << _name;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

/* operator ------------------------------------------------------------------*/

ClapTrap & ClapTrap::operator = (ClapTrap const & toAssign)
{

	if (this == &toAssign)
		return (*this);
	_name = toAssign._name;
	_hit = toAssign._hit;
	_energy = toAssign._energy;
	_attackDamage = toAssign._attackDamage;

	std::cout << PURPLE "CalTrap copy assignment operator called" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;

	return (*this);
}

/* public utilities ----------------------------------------------------------*/

void ClapTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it has not enough energy!" RESET << std::endl;
		return ;
	}
	if (_hit == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't attacks " RESET << target;
		std::cout << RED ", it is destroy!" RESET << std::endl;
		return ;
	}
	_energy--;
	std::cout << GREY "ClapTrap " RESET << _name << GREY " attacks " RESET << target;
	std::cout << GREY ", causing " RESET << _attackDamage << GREY " points of damage!" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hit)
		amount = _hit;
	_hit -= amount;
	std::cout << YELLOW "ClapTrap " RESET << _name << YELLOW " take " RESET;
	std::cout << amount << YELLOW " damage!" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " cant't be repaired " RESET ;
		std::cout << RED ", it has not enough energy!" RESET << std::endl;
		return ;
	}
	if (_hit == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " cant't be repaired " RESET ;
		std::cout << RED ", it is destroy!" RESET << std::endl;
		return ;
	}
	_energy--;
	_hit += amount;
	std::cout << GREEN "ClapTrap " RESET << _name << GREEN " be repaired " RESET ;
	std::cout << GREEN " by " RESET << amount << GREEN " hit points!" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}
