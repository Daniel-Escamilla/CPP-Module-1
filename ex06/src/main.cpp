/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:58:53 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 18:23:36 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/harlFilter.hpp"

int main(int argc, char **argv)
{
	HarlFilter Filter;
	if (argc > 1 && argc < 3)
		Filter.filter(argv[1]);
	return (0);
}