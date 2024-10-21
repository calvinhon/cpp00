/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:16 by chon              #+#    #+#             */
/*   Updated: 2024/10/21 17:05:50 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_contact(const Contact& contact) {
	for (int i = -1; i < 8; ++i) {
		incr_index(_contacts[i]);
	}
}


void	PhoneBook::search_contacts(int index) const {
	
}

void	PhoneBook::display_contacts() const {

}