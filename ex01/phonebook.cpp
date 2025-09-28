#include "utils.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

const Contact (&PhoneBook::getContacts() const)[8]
{
	return (m_contacts);
}

Contact (&PhoneBook::getContacts())[8]
{
  return (m_contacts);
}

int PhoneBook::addContact(std::string &first, std::string &last, std::string &nickname,
	std::string &phone_number, std::string &secret)
{
  int i;
  static int s_order = 0;

  i = 0;
  Contact new_contact(nickname, last, first, phone_number, secret);
  while (i < 8)
	{
	  if (m_contacts[i].isEmpty())
		{
		  m_contacts[i] = new_contact;
		  m_contacts[i].setFilled();
		  break;
		}
	  if (i == 7 && !m_contacts[i].isEmpty())
		{
		  if (s_order == 7)
			s_order = 0;
		  m_contacts[s_order] = new_contact;
		  m_contacts[s_order].setFilled();
		  s_order++;
		}
	  i++;
	}
  return (0);
}

void PhoneBook::displayPhoneBook() const
{
  int i;
  Contact con;

  i = 0;
  printHeader();
  while (i < 8)
	{
	  con = m_contacts[i];
	  if (!m_contacts[i].isEmpty())
		{
		  printBorders();
		  std::cout << '|' << std::setw(10) << std::left << i +1 << '|';
		  truncateOutput(con.getFirstName());
		  truncateOutput(con.getLastName());
		  truncateOutput(con.getNickname());
		  std::cout << '\n';
		}
	  i++;
	}
}
