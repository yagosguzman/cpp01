/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:53:08 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/06 18:53:11 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){
    int size = 5;
    Zombie *horde;
    horde = zombieHorde(size, "Antonio");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}