/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:42:47 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/28 11:54:21 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* constructor ---------------------------------------------------------------*/

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << CYAN "FragTrap default constructor called : " RESET;
	std::cout << _name << CYAN " is created " RESET << *this << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy) : ClapTrap(toCopy)
{
	std::cout << CYAN "FragTrap copy constructor called " RESET << *this << std::endl;
}

/* destructor ----------------------------------------------------------------*/

FragTrap::~FragTrap(void)
{
	std::cout << BLUE "FragTrap default destructor called " RESET << *this << std::endl;
}

/* operator ------------------------------------------------------------------*/

FragTrap & FragTrap::operator = (FragTrap const & toAssign)
{
	std::cout << PURPLE "FragTrap copy assignment operator called " RESET << *this << std::endl;
	if (this == &toAssign)
		return (*this);
	ClapTrap::operator = (toAssign);
	return (*this);
}

/* public utilities ----------------------------------------------------------*/

void FragTrap::highFiveGuys(void)
{
	if (_energyPoint == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't high five ";
		std::cout << ", it has not enough energy! " RESET << *this << std::endl;
		return ;
	}
	if (_hitPoint == 0)
	{
		std::cout << RED "FragTrap " RESET << _name << RED " can't high five ";
		std::cout << ", it is destroy! " RESET << *this << std::endl;
		return ;
	}
	std::cout << YELLOW_BLINK "FragTrap " RESET;
	std::cout << _name << YELLOW_BLINK " high five done " RESET << *this << std::endl;
}
