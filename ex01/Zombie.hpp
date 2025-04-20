/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:16:30 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/18 19:29:30 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef zombie_HPP
# define zombie_HPP

# include <string>
# include <sstream>
# include <iostream>

class Zombie
{
	private:
		std::string name;
		int			n;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void SetName(std::string new_name);
};

Zombie	*zombieHorde(int n, std::string name);

#endif
