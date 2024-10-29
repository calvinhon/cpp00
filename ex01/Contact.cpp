/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:24 by chon              #+#    #+#             */
/*   Updated: 2024/10/28 16:31:33 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fieldPrompt[5] = {
	"First Name: ",
	"Last Name: ",
	"Nickname: ",
	"Phone Number: ",
	"Darkest Secret: "
};

Contact::Contact() {}

Contact::Contact(const std::string& fName, const std::string& lName,
	const std::string& nName, const std::string& pNumber, const std::string& dSecret) {
		_fieldInput[0] = fName;
		_fieldInput[1] = lName;
		_fieldInput[2] = nName;
		_fieldInput[3] = pNumber;
		_fieldInput[4] = dSecret;
}

Contact::~Contact() {}

const std::string&	Contact::get_field(int index) const {return _fieldInput[index];}