/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:37:48 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/08 19:09:47 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl robot;

	robot.complain("DEBUG");
	robot.complain("INFO");
	robot.complain("WARNING");
	robot.complain("ERROR");
	robot.complain("NOEXISTE");
	return (0);
}