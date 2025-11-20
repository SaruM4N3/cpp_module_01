/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:46:02 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/21 00:26:30 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include"Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string _name);
	HumanB(std::string _name, std::string _type);
	~HumanB();
	void attack();
	void setWeapon(Weapon &_weapon);
private:
	std::string name;
	Weapon *weapon;
};