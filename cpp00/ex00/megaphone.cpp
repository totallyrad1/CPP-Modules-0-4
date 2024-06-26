/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:14 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/14 15:00:50 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 1;
	int j;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			std::cout << (unsigned char)toupper(av[i][j]);
			j++;
		} 
		i++;
	}
	std::cout << std::endl;
}