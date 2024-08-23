/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:42:10 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 09:43:36 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

virtual IMateriaSource::~IMateriaSource()
{
	std::cout << "Material Source DESTRACTOR called" << std::endl;
}