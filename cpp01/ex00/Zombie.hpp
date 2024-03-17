/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:43:25 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/16 17:00:53 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie();
		
		void announce( void );
	private:
		std::string name;	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif