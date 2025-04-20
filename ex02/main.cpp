/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:59:42 by descamil          #+#    #+#             */
/*   Updated: 2025/04/18 20:03:11 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string --> " << &string << std::endl;
	std::cout << "Value --> " << string << std::endl;

	std::cout << "\nstringPTR --> " << stringPTR << std::endl;
	std::cout << "Value --> " << *stringPTR << std::endl;

	std::cout << "\nstringREF --> " << &stringREF << std::endl;
	std::cout << "Value --> " << stringREF << std::endl;

}