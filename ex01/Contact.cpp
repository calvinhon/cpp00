/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:24 by chon              #+#    #+#             */
/*   Updated: 2024/10/21 17:07:42 by chon             ###   ########.fr       */
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

Contact::Contact(const std::string& fName, const std::string& lName,
	const std::string& nName, const std::string& pNumber, const std::string& dSecret)
		: _index(0), _firstName(fName), _lastName(lName), _nickName(nName),
		_phoneNumber(pNumber), _darkestSecret(dSecret) {}

Contact::~Contact() {}

void	Contact::incr_index(int _index) {
	_index++;
}

int			Contact::get_index() const {return _index;}
std::string	Contact::get_fName() const {return _firstName;}
std::string	Contact::get_lName() const {return _lastName;}
std::string	Contact::get_nName() const {return _nickName;}
std::string	Contact::get_phoneNum() const {return _phoneNumber;}
std::string	Contact::get_darkSecret() const {return _darkestSecret;}