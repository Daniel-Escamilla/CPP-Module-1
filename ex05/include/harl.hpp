/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:52:57 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 17:39:43 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "include.hpp"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		typedef void (Harl::*Pointer)();
		
		Harl(void) {};
		~Harl(void) {};
		
		void	complain(std::string level);
		static const std::string levels[4];
		static Pointer	functions[4];
};

const std::string Harl::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

Harl::Pointer Harl::functions[4] = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,	
	&Harl::error
};

#endif
