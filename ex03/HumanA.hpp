/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:14:53 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 19:18:33 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);
		void	attack(void);
		void	setWeapon(Weapon weapon);
	private:
		std::string		_name;
		Weapon			&_weapon;
}