/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:32:55 by grenaud-          #+#    #+#             */
/*   Updated: 2023/05/30 18:12:58 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <algorithm>

class	Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void		announce(void);
		void		setName(const std::string name);
		std::string	getName(void); //const;
	private:
		std::string		_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
