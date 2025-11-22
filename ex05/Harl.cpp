/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:59:46 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/22 02:51:06 by zsonie           ###   ########lyon.fr   */
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
	const std::string levels[] = {"Debug", "Info", "Warning", "Error"};

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
	std::cout << "Debug" << std::endl;
}
void info(void)
{
}
void warning(void)
{
}
void error(void)
{
}

void Harl::complain(std::string level)
{
	// void *func;

	// func = (void *)&debug;
	switch (stringToEnum(level))
	{
	case Debug:
		// func;
		break;
	case Info:
		std::cout << "Info" << std::endl;
		break;
	case Warning:
		std::cout << "Warning" << std::endl;
		break;
	case Error:
		// error();
		std::cout << "Error" << std::endl;
		break;
	default:
		std::cout << "Wrong argument" << std::endl;
		break;
	}
}