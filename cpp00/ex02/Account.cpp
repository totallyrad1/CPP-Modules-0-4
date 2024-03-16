/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:47:57 by asnaji            #+#    #+#             */
/*   Updated: 2024/03/16 03:13:00 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int amount = checkAmount();
	if(withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else{
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
		_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
	}
}
Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::_displayTimestamp( void )	
{
	time_t currtime;
	time(&currtime);
	struct tm* loctimerad = localtime(&currtime);

	char timetxt[20];
	strftime(timetxt, sizeof(timetxt), "%y%m%d_%H%M%S", loctimerad);
	std::cout << "[" <<timetxt << "]" <<" ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits <<";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}