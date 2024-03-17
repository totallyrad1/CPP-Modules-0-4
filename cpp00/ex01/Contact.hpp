/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:48:41 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 13:54:38 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "Phonebook.hpp"
class Phonebook;
class Contact{
	public :
		void rad_add(Phonebook *book);
		void rad_search(Phonebook *book);
		void print_phonebook(Phonebook *book);

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif