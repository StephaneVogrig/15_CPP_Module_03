/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:22:19 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/28 13:25:42 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* constructor ---------------------------------------------------------------*/

DiamondTrap::DiamondTrap(std::string name)
				: ClapTrap(name + "_clap_name", FragTrap::_initHit, ScavTrap::_initEnergy, FragTrap::_initAttackDamage),
				_name(name)
{
	std::cout << CYAN "DiamondTrap default constructor called : " RESET;
	std::cout << _name << CYAN " is created " RESET << *this << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
	std::cout << CYAN "DiamondTrap copy constructor called " RESET << *this << std::endl;
	*this = toCopy;
}

/* destructor ----------------------------------------------------------------*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << BLUE "DiamondTrap default destructor called " RESET << *this << std::endl;
}

/* operator ------------------------------------------------------------------*/

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & toAssign)
{
	std::cout << PURPLE "DiamondTrap copy assignment operator called" RESET << std::endl;
	if (this == &toAssign)
		return (*this);
	ClapTrap::operator = (toAssign);
	_name = toAssign._name;
	return (*this);
}

/* public utilities ----------------------------------------------------------*/

void DiamondTrap::whoAmI(void)
{
	std::cout << YELLOW "My name is " RESET << _name
	<< YELLOW ", my ClapTrap name is " RESET << ClapTrap::_name
	<< std::endl;
}

/* private -------------------------------------------------------------------*/

void DiamondTrap::display(std::ostream & os) const
{
	os << _name;
	os << YELLOW " clapName:" RESET << ClapTrap::_name;
	os << YELLOW " hit:" RESET << _hitPoint;
	os << YELLOW " energy:" RESET << _energyPoint;
	os << YELLOW " attackDammage:" RESET << _attackDamage;
}
