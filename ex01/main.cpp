#include "contact.hpp"
#include "phonebook.hpp"
#include <iostream>

std::string prompt()
{
  std::string value;
  
  std::cout << "Enter: ADD (to add a new contact), SEARCH (to search a new contact), or EXIT.\n";
  std::getline(std::cin, value);
  return (value);
}

void setContactData(PhoneBook &phb)
{
  std::string contactData[5];

	std::cout << "Enter contact's first name:\n";
	std::getline(std::cin, contactData[0]);
	std::cout << "Enter last name:\n";
	std::getline(std::cin, contactData[1]);
	std::cout << "Enter nickname:\n";
	std::getline(std::cin, contactData[2]);
	std::cout << "Enter phone number:\n";
	std::getline(std::cin, contactData[3]);
	std::cout << "Enter contact's darkest secret:\n";
	std::getline(std::cin, contactData[4]);
	phb.addContact(contactData[0], contactData[1], contactData[2], 
	    contactData[3], contactData[4]);
}

void fetchContactData(PhoneBook &phb)
{
  phb.displayPhoneBook();
}

int main()
{
  std::string cmd;
  PhoneBook phb;
  
  while (1)
	{
		cmd = prompt();
	  	if (cmd == "ADD")
			setContactData(phb);
		// else if (cmd == "SEARCH")
		//   fetchContactData(phb);
	  	else if (cmd == "EXIT")
			break;
	  	else
			continue;
	}
  return (0);
}
