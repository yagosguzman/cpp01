/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:54:16 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 19:58:07 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string w_type);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(std::string n_type);
};

#endif		