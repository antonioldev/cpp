/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:12:08 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/30 14:35:18 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[31m-- CONSTRUCTOR --\033[0m" << std::endl;
	ClapTrap A;
	ClapTrap B("WALL-E");
	ClapTrap C("C-3PO");
	ClapTrap D(C);
	A = B;

	std::cout << "\033[31m\n-- ACTION --\033[0m" << std::endl;
	B.attack("C-3PO");
	C.takeDamage(-5);
	C.beRepaired(1);
	C.attack("WALL-E");
	A.takeDamage(20);
	A.beRepaired(1);
	A.attack("C-3PO");

	std::cout << "\033[31m\n-- DECONSTRUCTOR --\033[0m" << std::endl;
	return (0);
}