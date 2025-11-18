/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:02:52 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/18 00:51:07 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>

class Zombie 
{
public:
	Zombie(std::string _name);
	~Zombie();
	void announce( void ); 
private:
	std::string name;
};

void randomChump( std::string name);
Zombie* newZombie( std::string name);
