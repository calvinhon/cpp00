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

void	add_contact_info(PhoneBook& phone_book) {
	std::string	fieldInput[5];
	
	for (int i = 0; i < 5; ++i) {
		while (1) {
			std::cout << "Enter " << Contact::fieldPrompt[i];
			std::getline(std::cin, fieldInput[i]);
			if (!fieldInput[i].empty())
				break ;
			else
				std::cout << "Input must not be empty!\n";
		}
	}
	Contact contact(fieldInput[0], fieldInput[1], fieldInput[2], fieldInput[3], fieldInput[4]);
	phone_book.add_contact(contact);
}

int	main(int ac, char **av) {
	std::string	input;
	PhoneBook	phone_book;

	std::cout << "Welcome to my awesome phonebook\n";
	while (1) {
		std::cout << "Input ADD, SEARCH OR EXIT\n";
		std::getline(std::cin, input);
		if (input.empty() || (input != "ADD" && input != "SEARCH" && input != "EXIT"))
			std::cout << "REMINDER! Input only one argument: ADD, SEARCH or EXIT\n";
		if (input == "ADD")
			add_contact_info(phone_book);
		if (input == "SEARCH")
			phone_book.search_contacts();
		if (input == "EXIT")
			break ;
	}
	return (0);
}