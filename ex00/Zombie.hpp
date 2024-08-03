/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 23:11:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/02 23:22:38 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif