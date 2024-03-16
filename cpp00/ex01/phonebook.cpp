/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:21 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/16 14:29:31 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int checkvalid(std::string str)
{
	int i = 0;
	while(str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	if(!str[i])
		return (0);
	return (1);
}

void rad_add(Phonebook *book)
{
	std::string firstname, lastname, nickname, darkest_secret, phtxt;
	static int i;
	if (i == 8)
		i = 0;
	std::cout << "\033[0;32menter contact phone number: \033[0m";
	if(!std::getline(std::cin, phtxt) || std::cin.eof())
		return ;
	std::cout << "\033[0;32menter contact first name: \033[0m";
	if(!std::getline(std::cin, firstname) || std::cin.eof())
		return ;
	std::cout << "\033[0;32menter contact last name: \033[0m";
	if(!std::getline(std::cin, lastname) || std::cin.eof())
		return ;
	std::cout << "\033[0;32menter contact nickname: \033[0m";
	if(!std::getline(std::cin, nickname) || std::cin.eof())
		return ;
	std::cout << "\033[0;32menter contact darkest secret: \033[0m";
	if(!std::getline(std::cin, darkest_secret) || std::cin.eof())
		return ;
	if((checkvalid(phtxt) || phtxt.empty()) || firstname.empty() || lastname.empty() || nickname.empty() || darkest_secret.empty())
	{
		std::cout << "\033[0;31m          INVALID INPUT          \033[0m" << std::endl;
		return ;
	}
	book->contacts[i].phone_number = phtxt;
	book->contacts[i].firstname = firstname;
	book->contacts[i].lastname = lastname;
	book->contacts[i].nickname = nickname;
	book->contacts[i].darkest_secret = darkest_secret;
	i++;
}

void print_inside(std::string str)
{
	int x;
	if(str.length() <= 9)
	{
		x = 0;
		while(str[x])
		{
			std::cout << str[x];
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
		x = 0;
		while(x < 8)
		{
			std::cout << str[x];
			x++;
		}
		std::cout << ".|";
	}
}

void print_phonebook(Phonebook *book)
{
	int i = 0;
	std::cout << " -------------------------------------- " << std::endl;
	std::cout << "|  index |" << "firstname|" << " lastname|" << " nickname|" << std::endl;
	while(i < 8)
	{
		std::cout << "|    " << i << "   |";
		print_inside(book->contacts[i].firstname);
		print_inside(book->contacts[i].lastname);
		print_inside(book->contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << " -------------------------------------- " << std::endl;
}

void rad_search(Phonebook *book)
{
	print_phonebook(book);
	int index;
	std::string intxt;
	std::cout << "\033[0;32mcontact index ? \033[0m";
	if(!std::getline(std::cin, intxt) || std::cin.eof())
		return ;
	if(checkvalid(intxt) || intxt.empty())
	{
		std::cout << "\033[0;31m          INVALID INPUT          \033[0m" << std::endl;
		return ;
	}
	index = atoi(intxt.c_str());
	if(index >= 0 && index <= 7 && book->contacts[index].firstname.empty())
	{
		std::cout << "\033[0;31m          INVALID INDEX          \033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[0;33mPhone number : \033[0m" << book->contacts[index].phone_number << std::endl;
	std::cout << "\033[0;33mFirst name : \033[0m" << book->contacts[index].firstname << std::endl;
	std::cout << "\033[0;33mLast name : \033[0m" << book->contacts[index].lastname << std::endl;
	std::cout << "\033[0;33mNickname : \033[0m" << book->contacts[index].nickname << std::endl;
	std::cout << "\033[0;33mdarkest secret : \033[0m" << book->contacts[index].darkest_secret << std::endl;
}

int main()
{
	std::string prompt;
	Phonebook book;
	while(RAD)
	{
		std::cout << "\033[0;35mwhat do u wanna do [\"ADD\" , \"SEARCH\" , \"EXIT\"] ? \033[0m";
		if(!std::getline(std::cin, prompt) || std::cin.eof())
		{
			std::cout << "EXIT" << std::endl;
			return 0;
		}
		if(prompt == "ADD")
			rad_add(&book);
		else if(prompt == "SEARCH")
			rad_search(&book);
		else if(prompt == "EXIT")
			return (0);
		else
			std::cout << "\033[0;31m           INVALID COMMAND          \033[0m" << std::endl;
	}
}