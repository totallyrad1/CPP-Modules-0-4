/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:31:01 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 01:51:49 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(10, "LITTLE GUY");
	int i = 0;
	while(i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete []zombies;
}