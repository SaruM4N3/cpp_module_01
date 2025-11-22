/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:58:26 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/22 01:47:06 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"iostream"
#include"Harl.hpp"

int main(void)
{
	std::string test;
	std::cin >> test;
	Harl carl;
	carl.complain(test);
	return 0;
}
