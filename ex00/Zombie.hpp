/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:02:08 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/18 19:29:41 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		~Zombie();
		void	announce(void);
		Zombie(std::string insert_name);
	private:
		std::string name;
};

Zombie	*newZombie(std::string name);

void randomChump(std::string name);


#endif