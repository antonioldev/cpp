/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bspoint.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:31:09 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/14 16:22:16 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	calculate_area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1-y2)) /2; 
	if (area < 0)
		return (area * -1);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// Area A = ABC 
	// A1 = PAB
	// A2 = PBC
	// A3 = PAC
	int area = calculate_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
	
	int area1 = calculate_area(point.get_x(), point.get_y(), a.get_x(), a.get_y(), b.get_x(), b.get_y());
	int area2 = calculate_area(point.get_x(), point.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
	int area3 = calculate_area(point.get_x(), point.get_y(), a.get_x(), a.get_y(), c.get_x(), c.get_y());
	if ((area1 + area2 + area3) == area)
		if (area1 !=0 && area2 !=0 && area3 !=0)
			return (true);
	return (false);
}