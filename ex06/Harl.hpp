/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:00:54 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/10 12:00:54 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level) const;
};
	typedef void (Harl::*function_p)(void) const;
	int		getLevel(std::string level);

#endif
