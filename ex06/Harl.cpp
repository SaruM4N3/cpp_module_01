/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:59:46 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/25 02:00:37 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include "Harl.hpp"

typedef enum
{
	Debug = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
	NotFound = 4
} input;

static input stringToEnum(std::string &level)
{
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < NotFound; i++)
	{
		if (level == levels[i])
			return (input)i;
	}
	return NotFound;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "DEBUG level:\n\
	I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n\
	I really do!"
			  << std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO level:\n\
	I cannot believe adding extra bacon costs more money.\n\
	You didn’t put enough bacon in my burger!\n\
	If you did, I wouldn’t be asking for more!"
			  << std::endl;
}
void Harl::warning(void)
{
	std::cout << "WARNING level:\n\
	I think I deserve to have some extra bacon for free.\n\
	I’ve been coming for years,\n\
	whereas you started working here just last month."
			  << std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR level:\n\
	This is unacceptable!\n\
	I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr_f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	switch (stringToEnum(level))
	{
	case Debug:
		(this->*ptr_f[Debug])();
		// fallthrough
	case Info:
		(this->*ptr_f[Info])();
		// fallthrough
	case Warning:
		(this->*ptr_f[Warning])();
		// fallthrough
	case Error:
		(this->*ptr_f[Error])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}