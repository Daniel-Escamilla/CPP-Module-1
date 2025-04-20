/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:16:02 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/18 19:36:39 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].SetName(name);
	}
	return (horde);
}