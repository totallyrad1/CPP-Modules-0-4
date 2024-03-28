/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:31:01 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/28 21:58:35 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(-1, "LITTLE GUY");
	if(!zombies)
		return (1);
	int i = 0;
	while(i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete []zombies;
}