/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:02:15 by descamil          #+#    #+#             */
/*   Updated: 2025/04/20 20:07:08 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include "include.hpp"

class Replace
{
	private:
		std::string		s1;
		std::string		s2;
		std::string		infilename;
		std::string		outfilename;
		std::ifstream	infile;
		std::ofstream	outfile;
	public:
		Replace(std::string filename, std::string string1, std::string string2);
		~Replace();
		void	S1ToS2();
};

#endif
