#include "utils.hpp"
#include <cctype>
#include <sstream>

static bool validateNumbers(const std::string &data)
{
  size_t i;
  char c;

  i = 0;
  while(i < data.length())
	{
	  c = data[i];
	  if (!(std::isdigit(static_cast<unsigned char>(c))))
		return (false);
	  i++;
	}
  return (true);
}

static void getContactData(std::string &data, const std::string &msg, bool validate)
{
  bool valid;

  valid = false;
  while(true)
	  {
		std::cout << msg;
		std::getline(std::cin, data);
		if (validate)
		  valid = validateNumbers(data);
		else
		  valid = true;
		if (valid && !data.empty())
		  break;
	  }
}

static void displayContactData(const Contact &cont)
{
  std::cout << "First name: " << cont.getFirstName() << '\n';
  std::cout << "Last name: " << cont.getLastName() << '\n';
  std::cout << "Nickname: " << cont.getNickname() << '\n';
  std::cout << "Phonenumber : " << cont.getPhonenumber() << '\n';
  std::cout << "Darkest secret: " << cont.getDarkestSecret() << '\n';
}

static int tableLength(const Contact (&cons)[8])
{
  int i;

  i = 0;
  while(!cons[i].isEmpty())
	i++;
  return (i);
}

static bool inTableRange(const std::string &id, int len)
{
  int id_i;
  std::stringstream id_ss;

  id_ss << id;
  id_ss >> id_i;
  if (id_i > len || id_i < 1)
	return (false);
  return (true);
}

void setContactData(PhoneBook &phb)
{
  std::string contactData[5];
  
  getContactData(contactData[0], "Enter contact's first name:\n", false);
  getContactData(contactData[1], "Enter last name:\n", false);
  getContactData(contactData[2], "Enter nickname:\n", false);
  getContactData(contactData[3], "Enter phone number:\n", true);
  getContactData(contactData[4], "Enter contact's darkest secret:\n", false);
  phb.addContact(contactData[0], contactData[1], contactData[2], contactData[3], contactData[4]);
}

void fetchContactData(PhoneBook &phb)
{
  int id_i;
  int table_len;
  std::string id_s;
  std::stringstream id_ss;
  Contact (&cons)[8] =  phb.getContacts();

  table_len = tableLength(cons);
  if (table_len == 0)
	{
	  std::cout << "No contacts found in the phonebook\n";
	  return ;
	}
  phb.displayPhoneBook();
  while(1)
	{
	  std::cout << "enter contact id:\n";
	  std::getline(std::cin, id_s);
	  if (validateNumbers(id_s) && id_s.length() == 1 && inTableRange(id_s, table_len))
		break;
	  else
		std::cout << "invalid ID\n";
	}
  id_ss << id_s;
  id_ss >> id_i;
  for(int i = 0; i < 8; i++)
	{
	  if (i == id_i - 1)
		displayContactData(cons[i]);
	}
}
