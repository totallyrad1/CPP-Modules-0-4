/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:11:07 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/16 21:57:47 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Zombie1");
	Zombie *zombie2 = newZombie("Zombie2");
	Zombie *zombie3 = newZombie("Zombie4");
	Zombie *zombie4 = newZombie("Zombie5");
	Zombie *zombie5 = newZombie("Zombie6");
	randomChump("zombie7");
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;
	delete zombie5;	
}