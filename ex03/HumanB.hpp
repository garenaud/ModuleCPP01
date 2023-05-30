/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:18:47 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 19:23:23 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		std::string		_name;
		Weapon			*_weapon;
}
