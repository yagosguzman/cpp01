/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:11:19 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 19:59:10 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon){
	this->_name = name;
}

HumanA::~HumanA(void){

}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}