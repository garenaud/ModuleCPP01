/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:39:16 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 18:16:44 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " is back to life" << std::endl;
}

Zombie::Zombie(void)
{
/* 	this->_name = "(null)";
	std::cout << "Zombie " << this->_name << " is back to life" << std::endl; */
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " definitely die" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(const std::string name)
{
    this->_name = name;
}

 std::string Zombie::getName()
{
    //this->_name = name; 
    return _name;    
}
