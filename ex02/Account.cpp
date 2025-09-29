#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts;

int Account::_totalAmount;

int Account::_totalNbDeposits;

int Account::_totalNbWithdrawals;

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
  std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
  //printf here the msg:
  //accounts:8;total:20049;deposits:0;withdrawals:0
  //and
  // index:0;amount:42;deposits:0;withdrawals:0
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
{
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << 
}

Account::~Account()
{
  
}

void Account::displayStatus( void ) const
{
  _displayTimestamp();
  //print here the msg:
  //index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
  //also
  // index:7;amount:8942;closed
}

void Account::makeDeposit(int)
{
  
}

bool Account::makeWithdrawal(int)
{
  return (false);
}

int Account::checkAmount( void ) const
{
  return (0);
}

