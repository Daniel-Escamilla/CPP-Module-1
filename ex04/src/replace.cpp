/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:19:10 by descamil          #+#    #+#             */
/*   Updated: 2025/04/20 20:12:17 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

Replace::Replace(std::string filename, std::string string1, std::string string2)
{
	if (filename.empty())
		throw std::invalid_argument("Error: Filename cannot be empty");
	infilename = filename;
	outfilename = filename;
	outfilename += ".replace";
	if (string1 == string2)
		throw std::invalid_argument("Error: S1 and S2 are the same");
	if (string1.empty())
		throw std::invalid_argument("Error: S1 cannot be empty");
	s1 = string1;
	if (string2.empty())
		throw std::invalid_argument("Error: S2 cannot be empty");
	s2 = string2;
	infile.open(infilename.c_str());
	if (!infile)
		throw std::invalid_argument("Error: Unable to open " + infilename);
	outfile.open(outfilename.c_str());
	if (!outfile)
		throw std::invalid_argument("Error: Unable to open " + outfilename);
}

Replace::~Replace()
{
	
}

void	Replace::S1ToS2()
{
	std::string		line;
	while (std::getline(infile, line))
	{
		std::string result = "";
		size_t		pos = 0;
		size_t		lastPos = 0;
		while (1)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			result.append(line, lastPos, pos - lastPos);
			result.append(s2);
			pos += s1.length();
			lastPos = pos;
		}
		if (pos < line.size())
			result.append(line, pos, line.size() - pos);
		if (result.empty())
    	    result = line;
		outfile << result << std::endl;
	}
	infile.close();
	outfile.close();
}
