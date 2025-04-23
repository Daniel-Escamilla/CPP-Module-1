/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:52:57 by descamil          #+#    #+#             */
/*   Updated: 2025/04/23 13:18:28 by daniel-esca      ###   ########.fr       */
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

#endif
