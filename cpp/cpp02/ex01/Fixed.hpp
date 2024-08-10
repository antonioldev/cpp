/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:50:25 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/09 16:26:06 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIDEX_DOT_HPP
#define FIDEX_DOT_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	fixed_point;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif