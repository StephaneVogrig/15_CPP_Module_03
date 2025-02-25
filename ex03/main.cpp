/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/25 01:10:43 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "DiamondTrap.hpp"

void testClapTrap(void)
{
	
	ClapTrap tab[5];

	std::cout << std::endl;
	ClapTrap * heap = new ClapTrap("clapHeap");
	delete heap;

	ClapTrap the_best("the_best");

	std::cout << std::endl;
	the_best.attack("an ennemy");

	std::cout << std::endl;
	the_best.takeDamage(5);

	std::cout << std::endl;
	the_best.beRepaired(10);
	the_best.takeDamage(5);

	std::cout << std::endl;
	the_best.beRepaired(1);

	std::cout << std::endl;
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	
	std::cout << std::endl;
	ClapTrap copy(the_best);

	std::cout << std::endl;
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");

	std::cout << std::endl;
	the_best.takeDamage(5);

	std::cout << std::endl;
	copy.attack("a stranger");
	copy.takeDamage(20);
	copy.beRepaired(20);
	copy.attack("a stranger");
	
	ClapTrap other;

	std::cout << std::endl;
}

void testFragTrap(void)
{
	FragTrap tabFrag[5];  

	std::cout << std::endl;
	ClapTrap * fragHeap = new FragTrap("fragHeap");
	delete fragHeap;

	FragTrap frag("FragTrap");

	std::cout << std::endl;
	frag.attack("an ennemy");

	std::cout << std::endl;
	frag.takeDamage(5);

	std::cout << std::endl;
	frag.beRepaired(10);
	frag.takeDamage(5);

	std::cout << std::endl;
	frag.beRepaired(1);

	std::cout << std::endl;
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	
	std::cout << std::endl;
	FragTrap fragCopy(frag);

	std::cout << std::endl;
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.highFiveGuys();

	std::cout << std::endl;
	frag.takeDamage(20);

	std::cout << std::endl;
	fragCopy.attack("a stranger");
	fragCopy.takeDamage(200);
	fragCopy.beRepaired(20);
	fragCopy.attack("a stranger");
	fragCopy.highFiveGuys();
	
	std::cout << std::endl;
	FragTrap fragOther;
	fragOther.highFiveGuys();
	
}

void testScavTrap(void)
{
	FragTrap tabFrag[5];  

	std::cout << std::endl;
	ClapTrap * fragHeap = new FragTrap("fragHeap");
	delete fragHeap;

	FragTrap frag("FragTrap");

	std::cout << std::endl;
	frag.attack("an ennemy");

	std::cout << std::endl;
	frag.takeDamage(5);

	std::cout << std::endl;
	frag.beRepaired(10);
	frag.takeDamage(5);

	std::cout << std::endl;
	frag.beRepaired(1);

	std::cout << std::endl;
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	
	std::cout << std::endl;
	FragTrap fragCopy(frag);

	std::cout << std::endl;
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.attack("an other ennemy");
	frag.highFiveGuys();

	std::cout << std::endl;
	frag.takeDamage(20);

	std::cout << std::endl;
	fragCopy.attack("a stranger");
	fragCopy.takeDamage(200);
	fragCopy.beRepaired(20);
	fragCopy.attack("a stranger");
	fragCopy.highFiveGuys();
	
	std::cout << std::endl;
	FragTrap fragOther;
	fragOther.highFiveGuys();
}

void displaySubtest(std::string const & title)
{
	int width = 80;
	int padding = (width - 2 - title.length()) / 2;
	// std::string star = std::string(width, '*');
	std::string left = std::string(padding, '-');
	std::string right = std::string(width - padding - 2 - title.length(), '-');
	std::cout << GREEN << std::endl;
	std::cout<< left << " "  << title << " " << right << std::endl;
	std::cout << RESET << std::endl;
}

void testDiamond_default(void)
{
	displaySubtest("default constructor");
	DiamondTrap trap;
	
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

void testDiamondTrap_energy(void)
{
	displaySubtest("energy");
	DiamondTrap trap("myDiamond");
	t_ui energy = trap.getEnergy();
	t_ui i = 0;
	while (i++ < energy / 2)
		trap.beRepaired(1);
	while (i++ <= energy)
		trap.attack("someone");
	trap.beRepaired(1);
	trap.attack("someone");
}

void testDiamondTrap_hit(void)
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
}

void testDiamondTrap(void)
{
	testDiamond_default();
	testDiamondTrap_array();
	testDiamondTrap_new();
	testDiamondTrap_energy();
	testDiamondTrap_hit();
	testDiamondTrap_utilities();
	
	
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
	// std::cout << std::endl;
}

int main(void)
{
	displaySection("test ClapTrap");
	testClapTrap();

	displaySection("test FragTrap");
	testFragTrap();

	displaySection("test ScavTrap");
	testScavTrap();

	displaySection("test DiamondTrap");
	testDiamondTrap();

	return (EXIT_SUCCESS);
}
