/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:33 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/14 20:08:56 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

# define RAD 1

class Contact{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		int phone_number;
		std::string darkest_secret;
};

class Phonebook{
	public:
		int oldest;
		Contact contacts[8];	
};


#endif