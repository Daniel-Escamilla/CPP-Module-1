/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:52:47 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 17:29:30 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	harl.complain("UKNOWKN");
	harl.complain("");
	return (0);
}