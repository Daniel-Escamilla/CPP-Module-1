/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:06:06 by descamil          #+#    #+#             */
/*   Updated: 2025/04/19 18:57:41 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.hpp"

Weapon::Weapon(std::string arm)
{
	type = arm;
}
Weapon::~Weapon(void)
{
	
}

const std::string Weapon::getType()
{
	return (type);
}
void Weapon::setType(std::string newType)
{
	type = newType;
}
