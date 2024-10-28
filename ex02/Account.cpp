/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:01:10 by chon              #+#    #+#             */
/*   Updated: 2024/10/28 13:45:40 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ( int initial_deposit ):
	_accountIndex(_nbAccounts), _amount(_totalAmount), _nbDeposits(0), _nbWithdrawals(0) {
	_totalAmount += initial_deposit;
	_displayTimestamp;
	std::cout << "Index:" << _accountIndex << ";amount:" << _amount << ";created\n";
};

void	Account::makeDeposit( int deposit ) {
	
}

bool	Account::makeWithdrawal( int withdrawal ) {
	
}

void	Account::displayAccountsInfos( void ) {
	
}

void	Account::displayStatus( void ) const {
	
}
