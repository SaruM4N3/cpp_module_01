/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:07:27 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/18 02:34:15 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 10;
	horde = zombieHorde(N, "pablo");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}