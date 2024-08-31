/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:49:28 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/31 10:15:02 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* you(me);
	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	
	me->unequip(0);
	me->unequip(1);
	you->use(0, *me);
	you->use(1, *me);
	bob->use(0, *me);
	delete bob;
	delete me;
	delete src;

	// AMateria* tmp;
	// tmp = new Ice();
	// if (tmp == NULL)
	//  	return (1);
	// AMateria* tmp2;
	// tmp2 = tmp->clone();
	// ICharacter* me = new Character("me");
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// me->equip(tmp);
	// // me->unequip(0);
	// me->use(0, *me);
	// delete me;
	// delete tmp;
	// delete tmp2;
	return (0);
}