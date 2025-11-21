/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:44:57 by zsonie            #+#    #+#             */
/*   Updated: 2025/11/21 03:26:50 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<fstream>

int main(int ac, char **av)
{
	if (ac != 4 || !av[0] || !av[1] || !av[2])
	{
		std::cout << "Wrong arguments!" << std::endl;
		return 1;
	}
	std::ifstream in_file(av[1]);
	if (!in_file.is_open())
	{
		std::cout << "Failed to open in_file!" << std::endl;
		return 1;
	}
	std::string s1 = av[2];
	if (!av[2][0])
	{
		std::cout << "s2 should have at least 1 char!" << std::endl;
		return 1; 
	}
	std::string s2 = av[3];

	std::ofstream out_file(((std::string)av[1]).append(".replace").c_str());
	if (!out_file.is_open())
	{
		std::cout << "Failed to open out_file!" << std::endl;
		return 1;
	}
	std::string line;
	while (!in_file.eof())
	{
		getline( in_file, line);
		std::size_t pos = 0;
		while ((pos = line.find(s1, pos) )!= line.npos)
		{
			line.erase(pos,s1.length());
			line.insert(pos,s2);
			pos += s2.length();
		}
		if (!in_file.eof())
			out_file << line << std::endl;
		else 
			out_file << line;
	}
	in_file.close();
	out_file.close();
	return 0;
}