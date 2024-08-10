/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:32:48 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 09:45:31 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_DOT_HPP
#define HARL_DOT_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(std::string level);
};



#endif