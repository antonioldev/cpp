/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:24:51 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/09 11:14:48 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_DOT_HPP
#define FIXED_DOT_HPP

#include <iostream>

class Fixed
{
private:
	int	fixed_point;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};



#endif