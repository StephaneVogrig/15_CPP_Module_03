/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/24 02:51:47 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap scav("the best claptrap");

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
	ClapTrap copy(scav);

	std::cout << std::endl;
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");
	scav.attack("an other ennemy");

	std::cout << std::endl;
	scav.takeDamage(5);

	std::cout << std::endl;
	copy.attack("a stranger");
	copy.takeDamage(20);
	
	std::cout << std::endl;

	

	return (EXIT_SUCCESS);
}
