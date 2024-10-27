/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:16 by chon              #+#    #+#             */
/*   Updated: 2024/10/25 17:03:06 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

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
        while (--i > -1)
            _contacts[i] = _contacts[i - 1];
        _contacts[i] = contact;
	    if (get_contact_ct() < MAX_CONTACT_CT)
            set_contact_ct();
    }
}

void	PhoneBook::search_contacts(int index) const {
	
}
