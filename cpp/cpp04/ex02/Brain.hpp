/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:18:22 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 11:15:08 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_DOT_HPP
#define BRAIN_DOT_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
};

#endif