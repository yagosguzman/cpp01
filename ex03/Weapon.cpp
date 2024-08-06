/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:16:07 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 19:57:47 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type){
	setType(w_type);
}

Weapon::~Weapon(void){

}


void	Weapon::setType(std::string n_type){
	this->_type = n_type;
}

const std::string&	Weapon::getType(void) const{
	return this->_type;
}