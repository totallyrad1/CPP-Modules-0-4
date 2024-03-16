/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:33 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/16 14:26:24 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib>

# define RAD 1

class Contact{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class Phonebook{
	public:
		int oldest;
		Contact contacts[8];	
};


#endif