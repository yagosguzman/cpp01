/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:03:07 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 19:47:03 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_weapon;
		std::string	_name;
		
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
};

#endif