/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:55:07 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/17 03:16:21 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string A = "HI THIS IS BRAIN";
 	std::string *stringPTR = &A;
	std::string &stringREF = A;

	std:: cout << "String A address: "<< &A << std::endl;
	std:: cout << "stringPTR address: " << stringPTR << std::endl;
	std:: cout << "stringREF address: " <<&stringREF << std::endl;

	std:: cout << "String A content: " << A << std::endl;
	std:: cout << "stringPTR content: " << *stringPTR << std::endl;
	std:: cout << "stringREF content: " << stringREF << std::endl;
}