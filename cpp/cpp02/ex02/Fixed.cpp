/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:33:55 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/10 16:47:17 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : fixed_point(i << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(f * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(other.fixed_point);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& other)
{
	fixed_point = (this->fixed_point * other.fixed_point) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& other)
{
	fixed_point = (this->fixed_point / other.fixed_point) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator+(const Fixed& other)
{
	fixed_point = (this->fixed_point + other.fixed_point) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator-(const Fixed& other)
{
	fixed_point = (this->fixed_point - other.fixed_point) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator++(void)
{
	fixed_point = (fixed_point + (1 << fractionalBits)) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator++(int)
{
	fixed_point = (fixed_point + (1 << fractionalBits)) >> fractionalBits;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	fixed_point -= 1 >> fractionalBits;
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)(fixed_point) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (fixed_point >> fractionalBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const
{
	return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}
