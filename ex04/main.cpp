/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:17:09 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 21:12:59 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int	replace_strings(const std::string& file, const std::string& s1, const std::string& s2){
	
	std::ifstream input(file.c_str());
	if (!input){
			std::cout  << "Problem opening the file" << std::endl;
			return (1);
		}
	std::cout << "Tudo bem" << s1 << s2 << std::endl;
	return (0);
}

int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Invalid number of parameters. Execute with ./replace \"filename\""
			<<	" \"str1\" and \"str2\"" << std::endl;
		return (1);
	}
	else
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		// std::string outfile = file + ".replace";

		if (s1.empty()){
			std::cout << "Error\nstr1 is empty" << std::endl;
			return (1);
		}
		return (replace_strings(file, s1, s2));
	}

}