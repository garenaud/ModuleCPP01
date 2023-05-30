/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:39:16 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 16:40:28 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " is back to life" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " definitely die" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* Création sur la pile (sans new) :

    Avantages :
        Gestion automatique de la mémoire : Les objets créés sur la pile sont automatiquement libérés lorsque la portée dans laquelle ils sont déclarés se termine, ce qui évite les fuites de mémoire.
        Simplicité : La création sur la pile ne nécessite pas d'opérateurs new et delete, ce qui rend le code plus simple et moins sujet aux erreurs de gestion de la mémoire.

    Inconvénients :
        Durée de vie limitée : Les objets créés sur la pile existent uniquement tant que la portée dans laquelle ils sont déclarés est active. Si vous devez accéder à l'objet en dehors de cette portée, vous devez le passer en tant que référence ou pointeur.
        Allocation statique : La taille des objets créés sur la pile doit être déterminée à la compilation. Si la taille de l'objet "zombie" doit être déterminée dynamiquement à l'exécution, la création sur la pile ne sera pas possible. */
