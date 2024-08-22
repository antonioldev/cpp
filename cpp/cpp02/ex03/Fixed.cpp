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
	float scaled = f * (1 << fractionalBits);
	this->setRawBits(roundf(scaled));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	// *this = other;
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

Fixed Fixed::operator*(const Fixed& other)
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other)
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)
{
	return (this->toFloat() - other.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->fixed_point += 1;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->fixed_point -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;

	(this->fixed_point) +=1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	(this->fixed_point) -=1;
	return (temp);
}

int Fixed::operator<(const Fixed& other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>(const Fixed& other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(const Fixed& other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(const Fixed& other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator==(const Fixed& other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(const Fixed& other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}
	
const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}
	
Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
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
