/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:04:20 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:55:54 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_DOT_HPP
#define CAT_DOT_HPP

#include "Animal.hpp"
// #include "Brain.cpp"
#include <iostream>

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
	std::string getType() const;
};



#endif