/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:04:20 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:00:57 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_DOT_HPP
#define DOG_DOT_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{

public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();
	void makeSound() const;
	std::string getType() const;
};



#endif