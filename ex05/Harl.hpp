/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:59:54 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/21 20:03:12 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};