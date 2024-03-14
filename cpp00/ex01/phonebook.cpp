/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:21 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/14 17:11:42 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void rad_add(Phonebook *book)
{
	(void)book;
	std::string firstname, lastname, nickname, darkest_secret;
	int phone_number = -1;
	static int i;
	if (i == 8)
		i = 0;
	std::cout << "enter contact phone number: ";
	std::cin >> phone_number;
	while(phone_number <= 0)
	{
		std::cout << "invalid phone number try again: ";
		std::cin >> phone_number;
	}
	std::cout << "enter contact first name: ";
	std::cin >> firstname;
	std::cout << "enter contact last name: ";
	std::cin >> lastname;
	std::cout << "enter contact nickname: ";
	std::cin >> nickname;
	std::cout << "enter contact darkest secret: ";
	std::cin >> darkest_secret;
	book->contacts[i].phone_number = phone_number;
	book->contacts[i].firstname = firstname;
	book->contacts[i].lastname = lastname;
	book->contacts[i].nickname = nickname;
	book->contacts[i].darkest_secret = darkest_secret;
	i++;
}

int main()
{
	std::string prompt;
	Phonebook book;
	while(RAD)
	{
		std::cout << "ADD?\nSEARCH?\nEXIT?\n";
		std::cin >> prompt;
		if(prompt == "ADD")
			rad_add(&book);
		if(prompt == "EXIT")
			return (0);
	}
}