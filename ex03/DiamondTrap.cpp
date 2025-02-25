/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:22:19 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/25 01:08:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
				: ClapTrap(name + "_clap_name", FragTrap::_initHit, ScavTrap::_initEnergy, FragTrap::_initAttackDamage), _name(name)
{
	
	std::cout << CYAN "DiamondTrap default constructor called : " RESET << _name << CYAN " is created" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & toCopy) : ClapTrap(toCopy)
{
	std::cout << CYAN "DiamondTrap copy constructor called" RESET;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << BLUE "DiamondTrap default destructor called" RESET;
	std::cout << " name: " << _name;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & toAssign)
{
	std::cout << PURPLE "DiamondTrap copy assignment operator called" RESET << std::endl;
	if (this == &toAssign)
		return (*this);
	_name = toAssign._name;
	_hit = toAssign._hit;
	_energy = toAssign._energy;
	_attackDamage = toAssign._attackDamage;
	std::cout << " (energy: " << _energy << " hit: " << _hit << ")" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << YELLOW "My name is " RESET << _name
	<< YELLOW ", my ClapTrap name is " RESET << ClapTrap::_name
	<< std::endl;
	std::cout << PURPLE "DiamondTrap copy assignment operator called" RESET << std::endl;
}

t_ui DiamondTrap::getEnergy(void)
{
	return (_energy);
}