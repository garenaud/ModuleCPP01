/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:23:41 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/05 13:26:20 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon):	_name(name), _weapon(Weapon)
{
	this->_name = name;
	this->_weapon = Weapon;
}

HumanA::~HumanA(void)
{
	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &Weapon)
{
	this->_weapon = Weapon;
}
