/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:06:16 by descamil          #+#    #+#             */
/*   Updated: 2025/08/18 16:59:46 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &arm)
{
	weapon = &arm;
}
void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
