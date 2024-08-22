/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:12:37 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/14 16:31:18 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point A(-10, -10);
	Point B(10, 30);
	Point C(20, 0);
	Point P(0, 0);
	if (bsp(A, B, C, P) == true)
		std::cout << "Point is inside the triangle's area" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle's area" << std::endl;
	return (0);
}
