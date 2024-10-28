/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:25:45 by chon              #+#    #+#             */
/*   Updated: 2024/10/21 14:25:45 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#define	MAX_CONTACT_CT 8

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <sstream>
#include "Contact.hpp"

class	PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	Contact get_contact(int i);
    int		get_contact_ct();
	void	set_contact_ct();
	void	add_contact(const Contact& contact);
	void 	display(const std::string& str, int is_empty);
	void	search_contacts();

private:
	Contact	_contacts[MAX_CONTACT_CT];
	int		_contact_ct;

};

#endif