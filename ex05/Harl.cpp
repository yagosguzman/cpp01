/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:03:27 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/08 19:08:41 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is alive 🤖" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl has been destroyed 💥" << std::endl;
}

void	Harl::debug(void){
	std::cout << "DEBUG : I love having extra bacon for my" 
		<< " 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< " I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string mode[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptrmode[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(mode[i]) == 0){
			(this->*ptrmode[i])();
			return;
		}
	}
	std::cout << "NO MATCHING MODE FOUND" << std::endl;
	return;
}