/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:18:57 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/04/17 11:22:20 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	
	private:
		std::string name;
	public:	
		void	announce(void)
		{
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
		// char	*extract()
		// {
		// 	return (name);
		// }
		Zombie(std::string insert_name)
		{
			name = insert_name;
		}
		~Zombie()
		{
			std::cout << "Zombie " << name << " destroyed" << std::endl;
		}
};

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}

void randomChump(std::string name)
{
	Zombie *new_zombie;

	new_zombie = newZombie(name);
	new_zombie->announce();
	delete(new_zombie);
}

int	main()
{
	Zombie *z;

	z = newZombie("FOO");
	delete(z);
	randomChump("Walking");
	return (0);
}