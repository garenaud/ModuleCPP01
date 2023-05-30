/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:33:59 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 19:04:03 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &myString;
	std::string &stringREF = myString;
	
	std::cout << "Adresse de la string en mémoire: " << &myString << std::endl;
    std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

    std::cout << "Valeur de la string: " << myString << std::endl;
    std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

    return 0;
}

/*     On crée une variable myString de type string initialisée à "HI THIS IS BRAIN".
    On déclare un pointeur stringPTR sur string et on l'initialise avec l'adresse de myString à l'aide de l'opérateur &.
    On déclare une référence stringREF sur string et on l'initialise avec myString.
    On affiche les adresses de la string en mémoire, l'adresse stockée dans stringPTR et l'adresse stockée dans stringREF.
    On affiche les valeurs de la string, la valeur pointée par stringPTR en utilisant l'opérateur * et la valeur pointée par stringREF. */