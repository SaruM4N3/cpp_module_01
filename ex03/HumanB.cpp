/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:45:58 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/21 00:26:38 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>


HumanB::HumanB(std::string _name)
{
	this->name = _name;
}

HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void HumanB::attack()
{
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}
