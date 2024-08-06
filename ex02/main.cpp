/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:52:57 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 18:53:00 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Address of string: " << &string << std::endl;
    std::cout << "Address of stringPTR: " << &stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string: " << string << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl; // el value al que apunta o la direccion almacenada??
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    return (0);
}