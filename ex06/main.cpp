/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:58:26 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/25 02:02:52 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"iostream"
#include"Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	Harl carl;
	carl.complain(av[1]);
	return 0;
}
