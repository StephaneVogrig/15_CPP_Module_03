/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 19:01:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ClapTrap.hpp"

int main(void)
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

	return (EXIT_SUCCESS);
}
