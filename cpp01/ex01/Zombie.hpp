/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:12:36 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 01:44:43 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void setname(std::string name);
		
		void announce( void );
	private:
		std::string name;	
};

Zombie* zombieHorde( int N, std::string name );

#endif