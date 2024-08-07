/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:17:09 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/07 20:37:20 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	replace_strings(const std::string& file, const std::string& s1, const std::string& s2){
	
	std::ifstream input(file.c_str());
	if (input.fail()){
			std::cout  << "Problem opening the file" << std::endl;
			return (1);
		}
	/*Leemos del input desde el inicio hasta el EOF y lo guardamos en content*/
	std::string content((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
	input.close();
	std::string::size_type i = 0;
	while ((i = content.find(s1, i)) != std::string::npos){
		content.erase(i, s1.size());
		content.insert(i, s2);
		i += s2.size();
	}
	std::ofstream output((file + ".replace").c_str());
	if (output.fail()){
		std::cout << "Problem creating the output file" << std::endl;
		return (1);
	}
	output << content;
	output.close();
	return (0);
}

int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Invalid number of parameters. Execute with ./replace \"filename\""
			<<	" \"s1\" and \"s2\"" << std::endl;
		return (1);
	}
	else
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty()){
			std::cout << "Error\nstr1 is empty" << std::endl;
			return (1);
		}
		return (replace_strings(file, s1, s2));
	}	
}