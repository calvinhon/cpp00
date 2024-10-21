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

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include "Contact.hpp"

class	PhoneBook {
	
private:
	Contact	_contacts[8];
	
public:
	void	add_contact(const Contact& contact);
	void	search_contacts(int index) const;
	void	display_contacts() const;
};

#endif