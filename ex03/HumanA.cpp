/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:46:05 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/20 23:58:50 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include<iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon)
{
	name = _name;
	weapon = &_weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}
