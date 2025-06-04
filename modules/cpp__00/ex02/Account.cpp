/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:38:22 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/04 11:38:22 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINT_OLD_DATE_IN_LOG 0
#include <iostream>
#include <iomanip>
#include "Account.hpp"

//* Inits
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//* Get tools
int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }
int Account::checkAmount(void) const { return _amount; }

//* Constructor
// Contructor void
Account::Account(void) : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";" << "created" << std::endl;
	Account::_totalAmount += _amount;
	Account::_nbAccounts++;
}
// Constructor with params
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

//* Destructor
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index" << _accountIndex << ";amount:" << _amount << ";" << "closed" << std::endl;
}


//* Prints on terminal
// Will print current time.
void Account::_displayTimestamp(void)
{
	time_t	time_in_msec;
	struct tm *timeinfo;

	time(&time_in_msec);
	timeinfo = localtime(&time_in_msec);

	if (PRINT_OLD_DATE_IN_LOG == 1)
		std::cout << "[19920104_091532] ";
	else
	{
		std::cout << "[" << (timeinfo->tm_year + 1900);
		// check file doc_setw_setfill.md for more exemples
		std::cout << std::setw(2) << std::setfill('0') << (timeinfo->tm_mon + 1);
		std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_mday << "_";
		std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_hour;
		std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_min;
		std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_sec << "]";
	}
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl; 
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// POST
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	if (deposit <= 0)
	{
		std::cout << "index:" << _accountIndex << ";deposit:refused" << std::endl;
		return ;
	}

	int previouse_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout	<< "index:"			<< _accountIndex
				<< ";p_amount:" 	<< previouse_amount
				<< ";deposit:"		<< deposit
				<< ";amount"		<< _amount
				<< ";nb_deposits:"	<< _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	previous_amount = _amount;

	if (previous_amount < withdrawal || withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << previous_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	_displayTimestamp();
	std::cout	<< "index:"	<< _accountIndex
				<< ";p_amount:" << previous_amount
				<< ";withdrawal" << withdrawal
				<< ";amount:"	<< _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	
	return (true);
}