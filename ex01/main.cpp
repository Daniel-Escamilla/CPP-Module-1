/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:16:20 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/18 19:37:06 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;

	horde = zombieHorde(5, "Zoooommmmbbbbiiiieee");

	for (int i = 0; i < 5 ; i++)
		horde[i].announce();
	delete[] (horde);
	return (0);
}