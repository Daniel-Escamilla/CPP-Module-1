/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:58:39 by descamil          #+#    #+#             */
/*   Updated: 2025/04/21 18:21:38 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include "include.hpp"

class HarlFilter
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		HarlFilter(void) {};
		~HarlFilter(void) {};
	
		void	filter(std::string level);
		static const std::string levels[4];
};

#endif
