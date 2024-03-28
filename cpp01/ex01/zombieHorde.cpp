/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:13:26 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/28 21:54:04 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << "invalid number of zombies\n";	
		return (NULL);
	}
	Zombie* zombies = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombies[i].setname(name);
	}
	return (zombies);
}