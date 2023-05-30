/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:33:59 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 18:55:27 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int	nbZombie = 20;
	Zombie *horde = zombieHorde(nbZombie, "Brain Eater");
	for (int i = 0; i < nbZombie; i++)
	{
		std::cout << horde[i].getName() << " " << i + 1 << ": ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
