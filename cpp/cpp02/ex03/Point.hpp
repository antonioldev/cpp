/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:16:25 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/14 16:16:59 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_DOT_HPP
#define  POINT_DOT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

#include <stdio.h>

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	~Point();
	int get_x(void) const;
	int get_y(void) const;
};

#endif