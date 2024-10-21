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

private:
	int					_index;
	std::string			_firstName;
	std::string			_lastName;
	std::string			_nickName;
	std::string			_phoneNumber;
	std::string			_darkestSecret;

public:
	Contact();
	Contact(const std::string& firstName, const std::string& lastName,
	const std::string& nickName, const std::string& phoneNumber, const std::string& darkestSecret);
	~Contact();

	static std::string	fieldPrompt[5];
	void				incr_index(int _index);
	int					get_index() const;
	std::string			get_fName() const;
	std::string			get_lName() const;
	std::string			get_nName() const;
	std::string			get_phoneNum() const;
	std::string			get_darkSecret() const;
};

#endif