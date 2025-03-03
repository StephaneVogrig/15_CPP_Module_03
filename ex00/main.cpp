/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/01 19:15:44 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ClapTrap.hpp"

void displaySubtest(std::string const & title)
{
	int width = 80;
	int padding = (width - 2 - title.length()) / 2;
	std::string left = std::string(padding, '-');
	std::string right = std::string(width - padding - 2 - title.length(), '-');
	std::cout << GREEN << std::endl;
	std::cout<< left << " "  << title << " " << right << std::endl;
	std::cout << RESET << std::endl;
}

void displaySection(std::string title)
{
	std::cout << std::endl;
	int width = 80;
	int padding = (width - 2 - title.length()) / 2;
	std::string star = std::string(width, '*');
	std::string blankLeft = std::string(padding, ' ');
	std::string blankRight = std::string(width - padding - 2 - title.length(), ' ');
	std::cout << GREEN << star << std::endl;
	std::cout << "*" << blankLeft << title << blankRight << "*" << std::endl;
	std::cout << star << RESET << std::endl;
}

/* ***************************************************************************************** */

void testClapTrap_constructor(void)
{
	displaySubtest("default constructor");
	ClapTrap trap;
}

void testClapTrap_copy(void)
{
	displaySubtest("copy constructor");

	std::cout << YELLOW "Create a ClapTrap" RESET << std::endl;
	ClapTrap * original = new ClapTrap("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a ClapTrap by copy" RESET << std::endl;
	ClapTrap copy(*original);

	std::cout << std::endl;
	std::cout << YELLOW "Delete original" RESET << std::endl;
	delete original;

	std::cout << std::endl;
	std::cout << YELLOW "copy content : " RESET << copy << std::endl;

	std::cout << std::endl;
}

void testClapTrap_array(void)
{
	displaySubtest("Array");
	ClapTrap trap[5];
}

void testClapTrap_new(void)
{
	displaySubtest("new");
	ClapTrap * heap = new ClapTrap("onTheHeap");
	delete heap;
}

void testClapTrap_assignation(void)
{
	displaySubtest("assignation");
	
	std::cout << YELLOW "Create a ClapTrap original" RESET << std::endl;
	ClapTrap original("original");
	
	std::cout << std::endl;
	std::cout << YELLOW "Create a ClapTrap toAssign" RESET << std::endl;
	ClapTrap toAssign("toAssign");
	
	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;
	
	std::cout << std::endl;
	std::cout << YELLOW "Assignation" RESET << std::endl;
	original = toAssign;

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;
	
	std::cout << std::endl;
}

void testClapTrap_energyPoint(void)
{
	displaySubtest("energy");
	ClapTrap trap("myClap");
	t_ui energy = trap.getEnergyPoint();
	t_ui i = 0;
	while (i++ < energy / 2)
		trap.beRepaired(i);
	while (i++ <= energy)
		trap.attack("someone");
	trap.beRepaired(1);
	trap.attack("someone");
}

void testClapTrap_hitPoint(void)
{
	displaySubtest("hit");
	ClapTrap trap("myClap");
	trap.takeDamage(1);
	trap.takeDamage(5);
	trap.takeDamage(200);
	trap.beRepaired(20);
	trap.attack("aStranger");
}

void testClapTrap(void)
{
	testClapTrap_constructor();
	testClapTrap_copy();
	testClapTrap_array();
	testClapTrap_new();
	testClapTrap_assignation();
	testClapTrap_energyPoint();
	testClapTrap_hitPoint();
}

/* ***************************************************************************************** */

int main(void)
{
	displaySection("test ClapTrap");
	testClapTrap();

	return (EXIT_SUCCESS);
}
