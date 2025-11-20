/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:46:28 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/20 23:40:46 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include<iostream>

Weapon::Weapon(){
	
}

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon(){
	
}

std::string Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string _type)
{
	type = _type;	
	// std::cout << type + ' ' + _type + ' '<< std::endl; 
}
