#include "utils.hpp"
#include <cctype>

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
  std::string id;
  // Contact (&cons)[8] =  phb.getContacts();
  // Contact con;
  
  std::cout << "displaying contact table\n";
  phb.displayPhoneBook();
  while(1)
	{
	  std::cout << "enter contact id:\n";
	  std::getline(std::cin, id);
	  if (validateNumbers(id) && id.length() == 1 && (id[0] >= '1' && id[0] <= '8'))
		break;
	} //convert id to int after getting the data from the user
  // for(int i = 0; i < 8; i++)
  // 	{
  // 	  if (i == id)
  // 	}
}
