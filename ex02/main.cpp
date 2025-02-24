/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 21:04:19 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "FragTrap.hpp"

int main(void)
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
	
	return (EXIT_SUCCESS);
}
