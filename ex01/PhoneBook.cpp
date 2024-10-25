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

void	PhoneBook::add_contact(const Contact& contact) {
	set_contact_ct();
	_contacts[get_contact_ct()] = contact;
}

void	set_contact_ct() {_contact_ct++;}
int		get_contact_ct() {return _contact_ct;}

void	PhoneBook::search_contacts(int index) const {
	
}

void	PhoneBook::display_contacts() const {

}