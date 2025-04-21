/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:58:48 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 18:27:05 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/harlFilter.hpp"

void	HarlFilter::debug(void)
{
	std::cout << "Did you know they changed the type of lettuce again? I track these things." << std::endl;
	std::cout << "I measured the fries and this batch is 1.3 centimeters shorter than average!\n" << std::endl;
}

void	HarlFilter::info(void)
{
	std::cout << "You charged me for sauce again? I thought we settled this last week." << std::endl;
	std::cout << "I timed how long it took to get my order. That's 47 seconds longer than usual!\n" << std::endl;
}

void	HarlFilter::warning(void)
{
	std::cout << "Honestly, it's starting to feel like I'm being singled out here." << std::endl;
	std::cout << "This is the third time this month my burger has been slightly overcooked!\n" << std::endl;	
}

void	HarlFilter::error(void)
{
	std::cout << "I'm contacting corporate. This is beyond incompetence!" << std::endl;
	std::cout << "Get me the owner. Not the manager — the actual owner!\n" << std::endl;

}

const std::string HarlFilter::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

void	HarlFilter::filter(std::string level)
{
	int	nivel = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			nivel = i;
	}
	switch (nivel)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			// fallthrough
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			// fallthrough
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			// fallthrough
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
	