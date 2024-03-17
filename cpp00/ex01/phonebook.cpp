/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:21 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 13:53:43 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	std::string prompt;
	Phonebook book;
	Contact contacts;
	while(RAD)
	{
		std::cout << "\033[0;35mwhat do u wanna do [\"ADD\" , \"SEARCH\" , \"EXIT\"] ? \033[0m";
		if(!std::getline(std::cin, prompt) || std::cin.eof())
		{
			std::cout << "EXIT" << std::endl;
			return 0;
		}
		if(prompt == "ADD")
			contacts.rad_add(&book);
		else if(prompt == "SEARCH")
			contacts.rad_search(&book);
		else if(prompt == "EXIT")
			return (0);
		else
			std::cout << "\033[0;31m           INVALID COMMAND          \033[0m" << std::endl;
	}
}