/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:18:50 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/05 15:24:04 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
/* 	if (_weapon == nullptr)
		std::cout << "no weapon"; */
	//this->_weapon = "fists";
}

HumanB::~HumanB(void)
{
	
}

void	HumanB::attack()
{
 	if (_weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with nothing" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
