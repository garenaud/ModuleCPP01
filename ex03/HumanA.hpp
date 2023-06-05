/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:14:53 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/05 15:14:47 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string		_name;
		Weapon			&_weapon;
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);
		void	attack(void);
		void	setWeapon(Weapon &Weapon);
};

#endif
