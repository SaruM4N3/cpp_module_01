/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:46:26 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/20 23:31:59 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>

#ifndef WEAPON
# define WEAPON

class Weapon
{
public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	std::string getType();
	void setType(std::string _type);
private:
	std::string type;
};
#endif