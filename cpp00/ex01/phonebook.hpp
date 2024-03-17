/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:28:33 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 13:54:06 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iostream>
# include <iomanip>
#include "Contact.hpp"
# define RAD 1

class Phonebook{
	public:
		int oldest;
		Contact contacts[8];	
};


#endif