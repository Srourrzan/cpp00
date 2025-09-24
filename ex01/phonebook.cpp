#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

int PhoneBook::addContact(std::string &first, std::string &last, std::string &nickname,
	std::string &phone_number, std::string &secret)
{
  int i;
  Contact new_contact(first, last, nickname, phone_number, secret);

  i = 0;
  while (i < 8)
	{
	  if (m_contacts[i].isEmpty())
		{
		  m_contacts[i] = new_contact;
		  m_contacts[i].setFilled();
		  break;
		}
	  i++;
	}
  return (0);
}

void PhoneBook::displayPhoneBook() const
{
	std::cout.fill('*');
  std::cout << std::setw(10);
}
