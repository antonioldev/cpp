/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:48:25 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:45:40 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_DOT_HPP
#define ANIMAL_DOT_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	virtual void makeSound() const;
	virtual std::string getType() const;

};

#endif