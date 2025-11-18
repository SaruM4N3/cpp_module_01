/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:07:17 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/18 02:39:24 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

Zombie::Zombie()
{
}
void Zombie::setName(std::string _name)
{
	this->name = _name;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead!" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
