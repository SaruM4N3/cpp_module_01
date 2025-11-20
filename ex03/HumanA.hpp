/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:46:00 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/20 23:58:59 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include"Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string _name, Weapon &_weapon);
	~HumanA();
	void attack();
private:
	std::string name;
	Weapon *weapon;
};