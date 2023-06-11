/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:00:24 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/10 12:00:24 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl 	frenchie;
	int		level;

	if (argc != 2)
	{
		std::cout << "\033[1;31m[ WRONG USAGE ]\033[0m" << std::endl;
		std::cout << "\033[32mhow to use it: ./HarlFilter <level>\033[0m" << std::endl;
		return (1);
	}
	level = getLevel(argv[1]);
	switch (level)
	{
		case 0:
				frenchie.complain("DEBUG");
		case 1:
				frenchie.complain("INFO");
		case 2:
				frenchie.complain("WARNING");
		case 3:
				frenchie.complain("ERROR");
				break;
		default:
				std::cout << "\033[35m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
	}
	return (0);
}
