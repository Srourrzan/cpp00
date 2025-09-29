#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
  return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
  return (_totalAmount);
}

int Account::getNbDeposits( void )
{
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
  return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
  std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << '\n';
}

void Account::_displayTimestamp( void )
{
  time_t timestamp;
  struct tm datetime;

  time(&timestamp);
  datetime = *localtime(&timestamp);
  std::cout << '[' << datetime.tm_year + 1900 << datetime.tm_mon + 1;
  std::cout << datetime.tm_mday << '_' << datetime.tm_hour << datetime.tm_min;
  std::cout << datetime.tm_sec << "] ";
}

Account::Account() {}

Account::Account(int initial_deposit)
  : _amount(initial_deposit)
  , _nbDeposits(0)
  , _nbWithdrawals(0)
{
  _accountIndex = _nbAccounts;
  ++_nbAccounts;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount;
  std::cout << ";closed\n";
  
}

void Account::displayStatus( void ) const
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount;
  std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::makeDeposit(int deposit_amount)
{
  _displayTimestamp();
  _nbDeposits++;
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
  _amount += deposit_amount;
  std::cout << ";deposit:" << deposit_amount << ";amount:" << _amount;
  std::cout << ";nb_deposits:" << _nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal_amount)
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
  if (withdrawal_amount >= _amount)
	{
	  std::cout << ";withdrawal:refused\n";
	  return (false);
	}
  _nbWithdrawals++;
  _amount -= withdrawal_amount;
  std::cout << ";withdrawal:" << withdrawal_amount << ";amount:" << _amount;
  std::cout << ";nb_withdrawals:" << _nbWithdrawals << '\n';
  return (true);
}

int Account::checkAmount( void ) const
{
  return (_amount);
}

