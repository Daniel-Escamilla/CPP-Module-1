/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:06:21 by descamil          #+#    #+#             */
/*   Updated: 2025/04/19 19:05:46 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.hpp"

HumanA::HumanA(std::string new_name, Weapon &arm)
	: name(new_name), weapon(arm)
{
	
}

HumanA::~HumanA(void)
{
	
}

void		HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
