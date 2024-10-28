/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:16 by chon              #+#    #+#             */
/*   Updated: 2024/10/28 11:47:10 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contact_ct(0) {}

PhoneBook::~PhoneBook() {}

Contact PhoneBook::get_contact(int i) {return _contacts[i];}

int		PhoneBook::get_contact_ct() {return _contact_ct;}

void	PhoneBook::set_contact_ct() {_contact_ct++;}

void	PhoneBook::add_contact(const Contact& contact) {
	int i = get_contact_ct() + 1;

    if (!get_contact_ct())
    {
        _contacts[0] = contact;
	    set_contact_ct();
    }
    else
    {
        if (get_contact_ct() == MAX_CONTACT_CT)
			i--;
		while (--i > 0)
            _contacts[i] = _contacts[i - 1];
        _contacts[i] = contact;
	    if (get_contact_ct() < MAX_CONTACT_CT)
            set_contact_ct();
    }
}

void PhoneBook::display(const std::string& str, int is_empty) {
    int i = -1;
    int j = -1;
	int	len = str.length();

    if (is_empty)
            std::cout << "          "; 
	else {
		if (len < 10) {
			while (++i < 10 - len)
				std::cout << " "; 
			i--;
		}
		while (str[++j] && ++i < 10) {
			if (len > 10 && i == 9)
				std::cout << '.'; 
			else
				std::cout << str[j]; 
		}
	}
    std::cout << "|";
}

void	PhoneBook::search_contacts() {
	int					i = -1;
	int					is_empty = 0;
	std::string			str;
	std::stringstream	index;
	int					index_num = 0;

	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	while (++i < MAX_CONTACT_CT)
    {
		std::cout << "|         " << i << "|";
		if (i > get_contact_ct())
			is_empty = 1;
        display(get_contact(i).get_field(0), is_empty);
        display(get_contact(i).get_field(1), is_empty);
        display(get_contact(i).get_field(2), is_empty);
        std::cout << "\n";
    }
	std::cout << "|----------|----------|----------|----------|\n";
	while (1) {
		std::cout << "Enter index to display: ";
		std::getline(std::cin, str);
		index.clear();
		index.str(str);
		index >> index_num;
		if (!index.fail() && index.eof() && index_num < MAX_CONTACT_CT)
			break ;
		else
			std::cout << "Input an index number that exists!\n";
	}
	if (index_num + 1 > get_contact_ct())
		std::cout << "Empty contact\n";
	else {
		for (int i = 0; i < 5; ++i) {
			std::cout << Contact::fieldPrompt[i];
			std::cout << get_contact(index_num).get_field(i) << '\n';
		}
	}
}
