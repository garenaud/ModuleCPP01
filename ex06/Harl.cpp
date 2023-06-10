/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:00:35 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/10 12:00:35 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void) const
{
	std::cout << "\033[32m[ DEBUG ]\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    Harl::info(void) const
{
	std::cout << "\033[33m[ INFO ]\033[0m" << std::endl;
    std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void) const
{
	std::cout << "\033[34m[ WARNING ]\033[0m" << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void) const
{
	std::cout << "\033[1;31m[ ERROR ]\033[0m" << std::endl;
    std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level) const
{
	const function_p	complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int             levelNumber = getLevel(level);

    if (levelNumber < 4)
        (this->*(complains[levelNumber]))();
    else
        std::cout << "\033[35m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
}

int    getLevel(std::string level)
{
    std::string     levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int             levelNumber = 4;

    for (int i = 0; i < 4 && levelNumber == 4; i++)
    {
        if (level == levels[i])
            levelNumber = i;
    }
    return(levelNumber);
}
