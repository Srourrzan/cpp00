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

Contact addContact(std::string &first, std::string &last, std::string &nickname,
	std::string &phone_number, std::string &secret)
{
  Contact new_contact(first, last, nickname, phone_number, secret);
  return (new_contact);
}

void fetchContactData()
{
  Contact new_contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter contact's first name:\n";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name:\n";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname:\n";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number:\n";
	std::getline(std::cin, phone_number);
	std::cout << "Enter contact's darkest secret:\n";
	std::getline(std::cin, darkest_secret);
	new_contact = addContact(first_name, last_name, nickname, 
		phone_number, darkest_secret);
}

int main()
{
  std::string cmd;

  while (1)
	{
		cmd = prompt();
	  	if (cmd == "ADD")
			fetchContactData();
	  		//addContact();
	  	if (cmd == "EXIT")
			break;
	  	if (cmd != "ADD" && cmd != "SEARCH")
			continue;
	}
  return (0);
}
