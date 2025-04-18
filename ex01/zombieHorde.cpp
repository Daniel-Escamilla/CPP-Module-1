/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:16:02 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/17 20:35:57 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string intToStr(int n)
{
	std::ostringstream str;
	str << n;
	return (str.str());
}

Zombie	*zombieHorde(int n, std::string name)
{
	for (; n > 0; n--)
	{
		newZombie(name);
	}
}