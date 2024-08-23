/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:12:08 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 15:35:49 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "\033[31m-- CONSTRUCTOR --\033[0m" << std::endl;
	DiamondTrap A("C-3PO");
	DiamondTrap B(A);
	DiamondTrap C("WALL-E");
	DiamondTrap D;
	D = C;
	
	std::cout << "\033[31m\n-- PRESENTATION --\033[0m" << std::endl;
	A.whoAmI();
	B.whoAmI();
	C.whoAmI();
	D.whoAmI();

	std::cout << "\033[31m\n-- ACTION --\033[0m" << std::endl;
	B.attack("WALL-E");
	B.highFivesGuys();
	C.takeDamage(5);
	C.beRepaired(1);
	A.attack("WALL-E");
	B.guardGate();
	A.attack("WALL-E");
	C.takeDamage(30);
	C.beRepaired(1);
	A.attack("WALL-E");
	C.takeDamage(30);
	C.beRepaired(1);
	A.attack("WALL-E");
	C.takeDamage(30);
	C.beRepaired(1);
	A.attack("C-3PO");
	C.takeDamage(30);
	C.beRepaired(1);


	std::cout << "\033[31m\n-- DECONSTRUCTOR --\033[0m" << std::endl;
	return (0);
}