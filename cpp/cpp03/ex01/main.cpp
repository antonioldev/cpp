/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:12:08 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 12:13:29 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	std::cout << "\033[31m-- CONSTRUCTOR --\033[0m" << std::endl;
	ScavTrap A;
	ScavTrap B("WALL-E");
	ScavTrap C("C-3PO");
	ScavTrap D(C);
	A = C;
	
	std::cout << "\033[31m\n-- ACTION --\033[0m" << std::endl;
	B.attack("C-3PO");
	B.guardGate();
	C.takeDamage(5);
	C.beRepaired(1);
	A.attack("WALL-E");
	A.takeDamage(20);
	A.beRepaired(1);
	A.attack("C-3PO");


	std::cout << "\033[31m\n-- DECONSTRUCTOR --\033[0m" << std::endl;
	return (0);
}