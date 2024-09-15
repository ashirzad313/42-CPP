/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:13:31 by ashirzad          #+#    #+#             */
/*   Updated: 2024/08/17 14:52:08 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <ctime>
#include "Account.hpp"

using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_totalNbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "created\n";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	Account::_nbAccounts -= 1;
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "closed\n";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}


void Account::_displayTimestamp(void)
{
	char buffer[20];
	time_t now = time(NULL);
	struct tm* local_time = std::localtime(&now);

	if (std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local_time))
        std::cout << buffer << " ";
}


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals << endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits += 1;
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	cout << "deposit:" << deposit << ";";
	cout << "amount:" << this->_amount + deposit << ";";
	cout << "nb_deposits:" << this->_nbDeposits << endl;
	this->_amount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		cout << "refused\n";
		return (false);
	}
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	cout << withdrawal << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "nb_withdrawals:" << this->_nbWithdrawals << endl;
	return (true);
}




