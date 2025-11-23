/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:58:26 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/23 04:02:15 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"iostream"
#include"Harl.hpp"

int main(void)
{
	Harl carl;
	carl.complain("DEBUG");
	carl.complain("INFO");
	carl.complain("WARNING");
	carl.complain("ERROR");
	carl.complain("");
	carl.complain("Debug");
	return 0;
}
