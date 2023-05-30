/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:32:55 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 16:33:13 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string		_name;
};

#endif
