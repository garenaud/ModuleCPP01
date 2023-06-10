/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:26:00 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/10 16:05:54 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return(new Zombie(name));
}

/* Création sur le tas (avec new) :

    Avantages :
        Durée de vie flexible : L'objet créé avec new existe jusqu'à ce qu'il soit explicitement supprimé avec delete. Cela permet de contrôler précisément la durée de vie de l'objet.
        Accès à partir de plusieurs emplacements : Étant donné que l'objet est alloué dynamiquement sur le tas, vous pouvez le transmettre à d'autres parties du code et y accéder à partir de différents emplacements.
        Évite la copie d'objets volumineux : Si la classe "zombie" a une taille importante, allouer l'objet sur le tas peut être plus efficace en évitant des copies inutiles.

    Inconvénients :
        Gestion de la mémoire : Lorsque vous allouez un objet sur le tas avec new, vous êtes responsable de le supprimer avec delete pour éviter les fuites de mémoire. Oublier de libérer la mémoire peut entraîner des fuites, ce qui peut affecter les performances de votre application.
        Risque d'erreur : L'utilisation incorrecte des pointeurs peut entraîner des erreurs de segmentation, des fuites de mémoire ou des comportements indéfinis si les objets alloués dynamiquement ne sont pas gérés correctement. */
		