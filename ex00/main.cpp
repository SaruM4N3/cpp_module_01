/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:07:27 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/18 00:53:45 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
	Zombie *amir = newZombie("amir");
	Zombie *pyv = newZombie("pyvendladrogue");
	randomChump("pablo");
	randomChump("timeo");
	randomChump("david");
	amir->announce();
	pyv->announce();
}