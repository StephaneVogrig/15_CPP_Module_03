/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:28:35 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/26 22:35:16 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructor ---------------------------------------------------------------*/

ClapTrap::ClapTrap(std::string name)
			: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << CYAN "ClapTrap default constructor called : " RESET;
	std::cout << _name << CYAN " is created " RESET << *this << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	std::cout << CYAN "ClapTrap copy constructor called " RESET << *this << std::endl;
	*this = toCopy;
}

/* destructor ----------------------------------------------------------------*/

ClapTrap::~ClapTrap(void)
{
	std::cout << BLUE "ClapTrap default destructor called " RESET << *this << std::endl;
}

/* operator ------------------------------------------------------------------*/

ClapTrap & ClapTrap::operator = (ClapTrap const & toAssign)
{
	std::cout << PURPLE "ClapTrap copy assignment operator called " RESET << *this << std::endl;
	if (this == &toAssign)
		return (*this);
	_name = toAssign._name;
	_hitPoint = toAssign._hitPoint;
	_energyPoint = toAssign._energyPoint;
	_attackDamage = toAssign._attackDamage;
	return (*this);
}

std::ostream & operator << (std::ostream & os, ClapTrap const & obj)
{
	os << obj.getName();
	os << YELLOW " hit:" RESET << obj.getHitPoint();
	os << YELLOW " energy:" RESET << obj.getEnergyPoint();
	os << YELLOW " attackDammage:" RESET << obj.getAttackDamage();
	return (os);
}

/* getter --------------------------------------------------------------------*/

std::string ClapTrap::getName(void) const
{
	return (_name);
}

t_ui ClapTrap::getHitPoint(void) const
{
	return (_hitPoint);
}

t_ui ClapTrap::getEnergyPoint(void) const
{
	return (_energyPoint);
}

t_ui ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

/* public utilities ----------------------------------------------------------*/

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoint == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't attacks " RESET;
		std::cout << target << RED ", it has not enough energy!" RESET << *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't attacks " RESET;
		std::cout << target << RED ", it is destroy!" RESET << *this << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout << GREY "ClapTrap " RESET << _name << GREY " attacks " RESET << target;
	std::cout << GREY ", causing " RESET << _attackDamage << GREY " points of damage! ";
	std::cout << *this << std::endl;
}

void ClapTrap::takeDamage(t_ui amount)
{
	if (amount > _hitPoint)
		amount = _hitPoint;
	_hitPoint -= amount;
	std::cout << YELLOW "ClapTrap " RESET << _name << YELLOW " take " RESET;
	std::cout << amount << YELLOW " damage! " RESET << *this << std::endl;
}

void ClapTrap::beRepaired(t_ui amount)
{
	if (_energyPoint == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't be repaired";
		std::cout << ", it has not enough energy!" RESET << *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout << RED "ClapTrap " RESET << _name << RED " can't be repaired";
		std::cout << ", it is destroy!" RESET << *this << std::endl;
		return ;
	}
	_energyPoint--;
	_hitPoint += amount;
	std::cout << GREEN "ClapTrap " RESET << _name << GREEN " be repaired with ";
	std::cout << RESET << amount << GREEN " hit points! " RESET << *this << std::endl;
}
