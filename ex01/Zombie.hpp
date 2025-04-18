/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:16:30 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/17 20:31:47 by daniel-esca      ###   ########.fr       */
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
		void anounce(void);
		Zombie(std::string name);
		~Zombie();
};

Zombie	*newZombie(std::string name);

#endif
