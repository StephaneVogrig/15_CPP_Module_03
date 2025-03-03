/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/03/01 19:17:15 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "DiamondTrap.hpp"

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

void testScavTrap_constructor(void)
{
	displaySubtest("default constructor");
	ScavTrap trap;
}

void testScavTrap_copy(void)
{
	displaySubtest("copy constructor");

	std::cout << YELLOW "Create a ScavTrap" RESET << std::endl;
	ScavTrap * original = new ScavTrap("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a ScavTrap by copy" RESET << std::endl;
	ScavTrap copy(*original);

	std::cout << std::endl;
	std::cout << YELLOW "Delete original" RESET << std::endl;
	delete original;

	std::cout << std::endl;
	std::cout << YELLOW "copy content : " RESET << copy << std::endl;

	std::cout << std::endl;
}

void testScavTrap_array(void)
{
	displaySubtest("Array");
	ScavTrap trap[5];
}

void testScavTrap_new(void)
{
	displaySubtest("new");
	ScavTrap * heap = new ScavTrap("onTheHeap");
	delete heap;
}

void testScavTrap_assignation(void)
{
	displaySubtest("assignation");

	std::cout << YELLOW "Create a ScavTrap original" RESET << std::endl;
	ScavTrap original("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a ScavTrap toAssign" RESET << std::endl;
	ScavTrap toAssign("toAssign");

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW "Assignation" RESET << std::endl;
	original = toAssign;

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
}

void testScavTrap_energyPoint(void)
{
	displaySubtest("energy");
	ScavTrap trap("myScav");
	t_ui energy = trap.getEnergyPoint();
	t_ui i = 0;
	while (i++ < energy / 2)
		trap.beRepaired(i);
	while (i++ <= energy)
		trap.attack("someone");
	trap.beRepaired(1);
	trap.attack("someone");
}

void testScavTrap_hitPoint(void)
{
	displaySubtest("hit");
	ScavTrap trap("myScav");
	trap.takeDamage(1);
	trap.takeDamage(5);
	trap.takeDamage(200);
	trap.beRepaired(20);
	trap.attack("aStranger");
}

void testScavTrap_utilities(void)
{
	displaySubtest("utilities");
	ScavTrap trap("myScav");
	trap.guardGate();
}

void testScavTrap_virtual(void)
{
	displaySubtest("virtual");
	ClapTrap clap("clap");
	ScavTrap scav("scav");

	std::cout << std::endl;
	std::cout << YELLOW "pointer" RESET << std::endl;
	ClapTrap * clapPtr = &clap;
	ClapTrap * scavPtr = &scav;

	std::cout << std::endl;
	clapPtr->attack("someone");
	scavPtr->attack("someone");

	std::cout << std::endl;
	std::cout << YELLOW "reference" RESET << std::endl;
	ClapTrap & clapRef = clap;
	ClapTrap & scavRef = scav;

	std::cout << std::endl;
	clapRef.attack("someone");
	scavRef.attack("someone");

	std::cout << std::endl;
	clapRef.ClapTrap::attack("someone");
	scavRef.ClapTrap::attack("someone");

}

void testScavTrap(void)
{
	testScavTrap_constructor();
	testScavTrap_copy();
	testScavTrap_array();
	testScavTrap_new();
	testScavTrap_assignation();
	testScavTrap_energyPoint();
	testScavTrap_hitPoint();
	testScavTrap_utilities();
	testScavTrap_virtual();
}

/* ***************************************************************************************** */

void testFragTrap_constructor(void)
{
	displaySubtest("default constructor");
	FragTrap trap;
}

void testFragTrap_copy(void)
{
	displaySubtest("copy constructor");

	std::cout << YELLOW "Create a FragTrap" RESET << std::endl;
	FragTrap * original = new FragTrap("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a FragTrap by copy" RESET << std::endl;
	FragTrap copy(*original);

	std::cout << std::endl;
	std::cout << YELLOW "Delete original" RESET << std::endl;
	delete original;

	std::cout << std::endl;
	std::cout << YELLOW "copy content : " RESET << copy << std::endl;

	std::cout << std::endl;
}

void testFragTrap_array(void)
{
	displaySubtest("Array");
	FragTrap trap[5];
}

void testFragTrap_new(void)
{
	displaySubtest("new");
	FragTrap * heap = new FragTrap("onTheHeap");
	delete heap;
}

void testFragTrap_assignation(void)
{
	displaySubtest("assignation");

	std::cout << YELLOW "Create a FragTrap original" RESET << std::endl;
	FragTrap original("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a FragTrap toAssign" RESET << std::endl;
	FragTrap toAssign("toAssign");

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW "Assignation" RESET << std::endl;
	original = toAssign;

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
}

void testFragTrap_energyPoint(void)
{
	displaySubtest("energy");
	FragTrap trap("myFrag");
	t_ui energy = trap.getEnergyPoint();
	t_ui i = 0;
	while (i++ < energy / 2)
		trap.beRepaired(i);
	while (i++ <= energy)
		trap.attack("someone");
	trap.beRepaired(1);
	trap.attack("someone");
}

void testFragTrap_hitPoint(void)
{
	displaySubtest("hit");
	FragTrap trap("myFrag");
	trap.takeDamage(1);
	trap.takeDamage(5);
	trap.takeDamage(200);
	trap.beRepaired(20);
	trap.attack("aStranger");
}

void testFragTrap_utilities(void)
{
	displaySubtest("utilities");
	FragTrap trap("myFrag");
	trap.highFiveGuys();
}

void testFragTrap(void)
{
	testFragTrap_constructor();
	testFragTrap_copy();
	testFragTrap_array();
	testFragTrap_new();
	testFragTrap_assignation();
	testFragTrap_energyPoint();
	testFragTrap_hitPoint();
	testFragTrap_utilities();
}

/* ***************************************************************************************** */

void testDiamondTrap_constructor(void)
{
	displaySubtest("default constructor");
	DiamondTrap trap;
}

void testDiamondTrap_copy(void)
{
	displaySubtest("copy constructor");

	std::cout << YELLOW "Create a DiamondTrap" RESET << std::endl;
	DiamondTrap * trap = new DiamondTrap;

	std::cout << std::endl;
	std::cout << YELLOW "Create a copy" RESET << std::endl;
	DiamondTrap copy(*trap);

	std::cout << std::endl;
	std::cout << YELLOW "Delete original" RESET << std::endl;
	delete trap;

	std::cout << std::endl;
	std::cout << YELLOW "copy content : " RESET << copy << std::endl;

	std::cout << std::endl;
}

void testDiamondTrap_array(void)
{
	displaySubtest("Array");
	DiamondTrap trap[5];
}

void testDiamondTrap_new(void)
{
	displaySubtest("new");
	DiamondTrap * heap = new DiamondTrap("onTheHeap");
	delete heap;	
}

void testDiamondTrap_assignation(void)
{
	displaySubtest("assignation");

	std::cout << YELLOW "Create a DiamondTrap original" RESET << std::endl;
	DiamondTrap original("original");

	std::cout << std::endl;
	std::cout << YELLOW "Create a DiamondTrap toAssign" RESET << std::endl;
	DiamondTrap toAssign("toAssign");

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW "Assignation" RESET << std::endl;
	original = toAssign;

	std::cout << std::endl;
	std::cout << YELLOW "original content : " RESET << original << std::endl;

	std::cout << std::endl;
}

void testDiamondTrap_energyPoint(void)
{
	displaySubtest("energy");
	DiamondTrap trap("myDiamond");
	t_ui energy = trap.getEnergyPoint();
	t_ui i = 0;
	while (i++ < energy / 2)
		trap.beRepaired(1);
	while (i++ <= energy)
		trap.attack("someone");
	trap.beRepaired(1);
	trap.attack("someone");
}

void testDiamondTrap_hitPoint(void)
{
	displaySubtest("hit");
	DiamondTrap trap("myDiamond");
	trap.takeDamage(1);
	trap.takeDamage(5);
	trap.takeDamage(200);
	trap.beRepaired(20);
	trap.attack("aStranger");
	
}

void testDiamondTrap_utilities(void)
{
	displaySubtest("utilities");
	DiamondTrap trap("myDiamond");
	trap.whoAmI();
	trap.highFiveGuys();
	trap.guardGate();
}

void testDiamondTrap_virtual(void)
{
	displaySubtest("virtual");
	ClapTrap clap("clap");
	DiamondTrap diamond("diamond");

	std::cout << std::endl;
	std::cout << YELLOW "pointer" RESET << std::endl;
	ClapTrap * clapPtr = &clap;
	ClapTrap * scavPtr = &diamond;

	std::cout << std::endl;
	clapPtr->attack("someone");
	scavPtr->attack("someone");

	std::cout << std::endl;
	std::cout << YELLOW "reference" RESET << std::endl;
	ClapTrap & clapRef = clap;
	ClapTrap & scavRef = diamond;

	std::cout << std::endl;
	clapRef.attack("someone");
	scavRef.attack("someone");

	std::cout << std::endl;
	clapRef.ClapTrap::attack("someone");
	scavRef.ClapTrap::attack("someone");

}

void testDiamondTrap(void)
{
	testDiamondTrap_constructor();
	testDiamondTrap_copy();
	testDiamondTrap_array();
	testDiamondTrap_new();
	testDiamondTrap_assignation();
	testDiamondTrap_energyPoint();
	testDiamondTrap_hitPoint();
	testDiamondTrap_utilities();
	testDiamondTrap_virtual();
}

/* ***************************************************************************************** */

int main(void)
{
	displaySection("test ClapTrap");
	testClapTrap();

	displaySection("test ScavTrap");
	testScavTrap();

	displaySection("test FragTrap");
	testFragTrap();

	displaySection("test DiamondTrap");
	testDiamondTrap();

	return (EXIT_SUCCESS);
}
