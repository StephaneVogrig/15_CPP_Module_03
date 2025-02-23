/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:26:42 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/23 17:49:10 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap clap("the best claptrap");

	std::cout << std::endl;
	clap.attack("an ennemy");

	std::cout << std::endl;
	clap.takeDamage(5);

	std::cout << std::endl;
	clap.beRepaired(10);
	clap.takeDamage(5);

	std::cout << std::endl;
	clap.beRepaired(1);

	std::cout << std::endl;
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");
	
	std::cout << std::endl;
	ClapTrap copy(clap);

	std::cout << std::endl;
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");
	clap.attack("an other ennemy");

	std::cout << std::endl;
	clap.takeDamage(5);

	std::cout << std::endl;
	copy.attack("a stranger");
	copy.takeDamage(20);
	
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
