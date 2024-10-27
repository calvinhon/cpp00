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

void display(const std::string& str) {
    int i = -1;
    int j = -1;

    if (str.length() < 10) {
        while (++i < 10 - str.length())
            std::cout << " "; 
        i--;
    }
    while (str[++j] && ++i < 10)
        std::cout << str[j]; 
    std::cout << "|";
}

void	search_contact(PhoneBook& phone_book) {
	int	i = -1;

	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	while (++i < MAX_CONTACT_CT)
    {
		std::cout << "|         " << i << "|";
        display(phone_book.get_contact(i).Contact::get_fName());
        display(phone_book.get_contact(i).Contact::get_lName());
        display(phone_book.get_contact(i).Contact::get_nName());
        std::cout << "\n";
    }
	std::cout << "|----------|----------|----------|----------|\n";
}

void	add_contact_info(PhoneBook& phone_book) {
	std::string	fieldInput[5] {};
	
	for (int i = 0; i < 5; ++i) {
		std::cout << "Enter " << Contact::fieldPrompt[i];
		std::getline(std::cin, fieldInput[i]);
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
			search_contact(phone_book);
		if (input == "EXIT")
			break ;
	}
	return (0);
}