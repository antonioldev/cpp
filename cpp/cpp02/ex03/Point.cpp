/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:20:24 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/14 16:16:50 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{

}

Point::Point(const float x, const float y)  : x(Fixed(x)), y(Fixed(y))
{
	
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
	
}

Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	Point temp(other);
	std::swap(*this, temp);
	return (*this);
}

Point::~Point()
{
	
}

int Point::get_x(void) const
{
	return (x.toInt());
}

int Point::get_y(void) const
{
	return (y.toInt());
}