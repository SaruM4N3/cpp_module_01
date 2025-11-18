/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:02:52 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/18 02:38:07 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>

class Zombie 
{
public:
	Zombie();
	~Zombie();
	void setName(std::string _name);
	void announce( void ); 
private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );
