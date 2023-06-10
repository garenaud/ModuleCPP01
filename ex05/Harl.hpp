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
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

#endif
