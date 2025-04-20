/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:55:31 by descamil          #+#    #+#             */
/*   Updated: 2025/04/20 19:34:16 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 4)
			throw std::invalid_argument("Error Needs 3 params [./replace filename s1 s2]");
		Replace replacer(argv[1], argv[2], argv[3]);
		replacer.S1ToS2();
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
		return (1);
	}
	return (0);
}
