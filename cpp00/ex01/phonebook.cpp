/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:21 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/14 17:56:40 by asnaji           ###   ########.fr       */
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
		std::cin.clear();
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

void print_phonebook(Phonebook *book)
{
	int i = 0;
	int j = 0;
	int x = 0;
	std::cout << " -------------------------------------- " << std::endl;
	std::cout << "|  index |" << "firstname|" << " lastname|" << " nickname|" << std::endl;
	while(i < 8)
	{
		std::cout << "|    " << i << "   |";
		j = 0;
		if(book->contacts[i].firstname.length() <= 9)
		{
			x = 0;
			while(book->contacts[i].firstname[x])
			{
				std::cout << book->contacts[i].firstname[x];
				x++;
			}
			while(x < 9)
			{
				std::cout << " ";
				x++;
			}
			std::cout << "|";
		}
		else
		{
			while(j < 9)
				std::cout << book->contacts[i].firstname[j];
			std::cout << ".|";
		}
		
		if(book->contacts[i].lastname.length() <= 9)
		{
			x = 0;
			while(book->contacts[i].lastname[x])
			{
				std::cout << book->contacts[i].lastname[x];
				x++;
			}
			while(x < 9)
			{
				std::cout << " ";
				x++;
			}
			std::cout << "|";
		}
		else
		{
			while(j < 9)
				std::cout << book->contacts[i].lastname[j];
			std::cout << ".|";
		}
		
		if(book->contacts[i].nickname.length() <= 9)
		{
			x = 0;
			while(book->contacts[i].nickname[x])
			{
				std::cout << book->contacts[i].nickname[x];
				x++;
			}
			while(x < 9)
			{
				std::cout << " ";
				x++;
			}
			std::cout << "|";
		}
		else
		{
			while(j < 9)
				std::cout << book->contacts[i].nickname[j];
			std::cout << ".";
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << " -------------------------------------- " << std::endl;
}

int main()
{
	std::string prompt;
	Phonebook book;
	while(RAD)
	{
		print_phonebook(&book);
		std::cout << "ADD?\nSEARCH?\nEXIT?\n";
		std::cin >> prompt;
		if(prompt == "ADD")
			rad_add(&book);
		if(prompt == "EXIT")
			return (0);
	}
}