/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:04:20 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:01:04 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_DOT_HPP
#define CAT_DOT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{

public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
	std::string getType() const;
};



#endif