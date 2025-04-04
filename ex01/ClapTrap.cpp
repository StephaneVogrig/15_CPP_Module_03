/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:28:35 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/06 16:13:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructor ---------------------------------------------------------------*/

ClapTrap::ClapTrap(std::string name)
			: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout	<< CYAN "ClapTrap default constructor called : " RESET
				<< _name << CYAN " is created " RESET << *this << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	std::cout	<< CYAN "ClapTrap copy constructor called " RESET
				<< *this << std::endl;
	*this = toCopy;
}

ClapTrap::ClapTrap(std::string name, t_ui hit, t_ui energy, t_ui attackDamage)
			: _name(name), _hitPoint(hit), _energyPoint(energy), _attackDamage(attackDamage)
{
	std::cout	<< CYAN "ClapTrap all param constructor called : " RESET
				<< _name << CYAN " is created " RESET << *this << std::endl;
}

/* destructor ----------------------------------------------------------------*/

ClapTrap::~ClapTrap(void)
{
	std::cout	<< BLUE "ClapTrap default destructor called " RESET
				<< *this << std::endl;
}

/* operator ------------------------------------------------------------------*/

ClapTrap & ClapTrap::operator = (ClapTrap const & toAssign)
{
	std::cout	<< PURPLE "ClapTrap copy assignment operator called " RESET
				<< *this << std::endl;
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
	os	<< obj.getName()
		<< YELLOW " hit:" RESET << obj.getHitPoint()
		<< YELLOW " energy:" RESET << obj.getEnergyPoint()
		<< YELLOW " attackDammage:" RESET << obj.getAttackDamage();
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
		std::cout	<< RED "ClapTrap " RESET << _name
					<< RED " can't attacks " RESET << target
					<< RED ", it has not enough energy! " RESET
					<< *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout	<< RED "ClapTrap " RESET << _name
					<< RED " can't attacks " RESET << target
					<< RED ", it is destroy!" RESET
					<< *this << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout	<< GREY "ClapTrap " RESET << _name
				<< GREY " attacks " RESET << target
				<< GREY ", causing " RESET << _attackDamage
				<< GREY " points of damage! " RESET
				<< *this << std::endl;
}

void ClapTrap::takeDamage(t_ui amount)
{
	if (amount > _hitPoint)
		amount = _hitPoint;
	_hitPoint -= amount;
	std::cout	<< YELLOW "ClapTrap " RESET << _name
				<< YELLOW " take " RESET << amount << YELLOW " damage! " RESET
				<< *this << std::endl;
}

void ClapTrap::beRepaired(t_ui amount)
{
	if (_energyPoint == 0)
	{
		std::cout	<< RED "ClapTrap " RESET << _name
					<< RED " can't be repaired, not enough energy! " RESET
					<< *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout	<< RED "ClapTrap " RESET << _name
					<< RED " can't be repaired, it is destroy! " RESET
					<< *this << std::endl;
		return ;
	}
	_energyPoint--;
	_hitPoint += amount;
	std::cout	<< GREEN "ClapTrap " RESET << _name
				<< GREEN " be repaired with " RESET
				<< amount << GREEN " hit points! " RESET
				<< *this << std::endl;
}
