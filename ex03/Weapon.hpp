/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:10:25 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/05 13:00:49 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void	setType(std::string type);
	private:
		std::string		_type;
};

#endif
