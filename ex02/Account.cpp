#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

static void displayTimestamp()
{
  time_t timestamp;
  struct tm datetime;

  time(&timestamp);
  datetime = *localtime(&timestamp);
  std::cout << '[' << datetime.tm_year + 1900 << datetime.tm_mon + 1;
  std::cout << datetime.tm_mday << '_' << datetime.tm_hour << datetime.tm_min;
  std::cout << datetime.tm_sec << "] ";
}

Account::Account(int)
{
  
}

Account::~Account()
{
  
}

void Account::displayAccountsInfos()
{
  displayTimestamp();
  //printf here the msg:
  //accounts:8;total:20049;deposits:0;withdrawals:0
  //and
  // index:0;amount:42;deposits:0;withdrawals:0
}

void Account::displayStatus() const
{
  displayTimestamp();
  //print here the msg:
  //index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
  //also
  // index:7;amount:8942;closed
}

Account::makeDeposit(int)
{
  
}

Account::makeWithdrawal(int)
{
  
}
