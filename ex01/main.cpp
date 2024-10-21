/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:26 by chon              #+#    #+#             */
/*   Updated: 2024/10/21 14:22:26 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

	// const std::string	firstName;
	// const std::string	lastName;
	// const std::string	nickName;
	// const std::string	phoneNumber;
	// const std::string	darkestSecret;

void	fill_contact_info(void) {
	std::string	fieldInput[5];
	
	for (int i = -1; i < 5; ++i) {
		std::cout << "Enter " << Contact::fieldPrompt[i];
		std::getline(std::cin, fieldInput[i]);
	}
	Contact	contact(fieldInput[0], fieldInput[1], fieldInput[2], fieldInput[3], fieldInput[4]);
}

int	main(int ac, char **av) {
	std::string	input;

	std::cout << "Welcome to my awesome phonebook" << std::endl;
	while (1) {
		std::cout << "Input ADD, SEARCH OR EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.empty() || (input != "ADD" && input != "SEARCH" && input != "EXIT"))
			std::cout << "REMINDER: Input only one argument: ADD, SEARCH or EXIT" << std::endl;
		if (input == "ADD")
			fill_contact_info();
		if (input == "EXIT")
			break ;
	}
	return (0);
}