/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:06:46 by descamil          #+#    #+#             */
/*   Updated: 2025/04/19 18:57:10 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "include.hpp" 

class Weapon
{
	private:
		std::string 		type;
	public:
		Weapon(std::string arm);
		~Weapon();
		const std::string	getType(void);
		void				setType(std::string new_type);
};


#endif
