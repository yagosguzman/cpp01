/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:24:44 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 20:00:02 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(void){

}

void	HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

void	HumanB::attack(void){
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " can't attack because there's no weapon" << std::endl;
}