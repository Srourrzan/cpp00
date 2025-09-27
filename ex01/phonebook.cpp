#include "utils.hpp"

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
		  break; //THIS IS NO FINISHED
		}
	  i++;
	}
  return (0);
}

void PhoneBook::displayPhoneBook() const
{
  int i;
  //int size;
  Contact con;

  i = 0;
  //size = 0;
  while (i < 8)
	{
	  con = m_contacts[i];
	  printBorders();
	  std::cout << std::setw(10) << std::left << i + 1 << '|';
	  truncateOutput(con.getFirstName());
	  truncateOutput(con.getLastName());
	  truncateOutput(con.getNickname());
	  std::cout << '\n';
	  i++;
	}
}
