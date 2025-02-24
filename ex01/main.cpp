/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 21:05:38 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap tabClap[5];  

	std::cout << std::endl;
	ClapTrap * clapHeap = new ClapTrap("clapHeap");
	delete clapHeap;

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
	ClapTrap clapCopy(the_best);

	std::cout << std::endl;
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");
	the_best.attack("an other ennemy");

	std::cout << std::endl;
	the_best.takeDamage(5);

	std::cout << std::endl;
	clapCopy.attack("a stranger");
	clapCopy.takeDamage(20);
	clapCopy.beRepaired(20);
	clapCopy.attack("a stranger");
	
	ClapTrap clapOther;

	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;

	ScavTrap tabScav[5];  

	std::cout << std::endl;
	ClapTrap * scavHeap = new ScavTrap("scavHeap");
	delete scavHeap;

	ScavTrap scav("scavTrap");

	std::cout << std::endl;
	scav.attack("an ennemy");

	std::cout << std::endl;
	scav.takeDamage(5);

	std::cout << std::endl;
	scav.beRepaired(10);
	scav.takeDamage(5);

	std::cout << std::endl;
	scav.beRepaired(1);

	std::cout << std::endl;
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	
	std::cout << std::endl;
	ScavTrap scavCopy(scav);

	std::cout << std::endl;
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.guardGate();

	std::cout << std::endl;
	scav.takeDamage(20);

	std::cout << std::endl;
	scavCopy.attack("a stranger");
	scavCopy.takeDamage(200);
	scavCopy.beRepaired(20);
	scavCopy.attack("a stranger");
	scavCopy.guardGate();
	
	std::cout << std::endl;
	ScavTrap scavOther;
	scavOther.guardGate();
	
	return (EXIT_SUCCESS);
}
