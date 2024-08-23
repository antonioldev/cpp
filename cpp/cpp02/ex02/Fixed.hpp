/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:21:35 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/10 15:11:43 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_DOT_HPP
#define FIXED_DOT_HPP

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

	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed operator/(const Fixed& other);
	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);

	Fixed& operator++(void); // Prefix (++F)
	Fixed& operator--(void); // Prefix (--F)
	Fixed operator++(int); // Postfix (F++)
	Fixed operator--(int); // Postfix (F--)

	int operator<(const Fixed& other) const;
	int operator>(const Fixed& other) const;
	int operator<=(const Fixed& other) const;
	int operator>=(const Fixed& other) const;
	int operator==(const Fixed& other) const;
	int operator!=(const Fixed& other) const;

	static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
	static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
	static Fixed& min(Fixed& obj1, Fixed& obj2);
	static Fixed& max(Fixed& obj1, Fixed& obj2);
	
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
	
	
	int getRawBits(void) const;
	void setRawBits(int const raw);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



#endif