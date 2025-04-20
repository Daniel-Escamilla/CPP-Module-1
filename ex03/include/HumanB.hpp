/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:06:38 by descamil          #+#    #+#             */
/*   Updated: 2025/04/19 19:31:58 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "include.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
	HumanB(std::string new_name);
	~HumanB(void);
	void		setWeapon(Weapon &arm);
	void		attack();
};


#endif
