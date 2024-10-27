/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:22:14 by chon              #+#    #+#             */
/*   Updated: 2024/10/21 14:22:14 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

class	Contact {

public:
	Contact() = default;
    Contact(const std::string& fName, const std::string& lName,
	const std::string& nName, const std::string& pNumber, const std::string& dSecret);
	~Contact();

	static std::string	fieldPrompt[5];
	const std::string&	get_fName() const;
	const std::string&	get_lName() const;
	const std::string&	get_nName() const;
	const std::string&	get_phoneNum() const;
	const std::string&	get_darkSecret() const;

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

};

#endif