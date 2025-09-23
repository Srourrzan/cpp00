#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>

std::string prompt()
{
  std::string value;
  
  std::cout << "Enter: ADD (to add a new contact), SEARCH (to search a new contact), or EXIT.\n";
  std::cin >> value;
  return (value);
}

int addContact()
{
  
}

int main()
{
  std::string cmd;

  while (1)
	{
	  cmd = prompt();
	  if (cmd == "EXIT")
		break;
	  if (cmd != "ADD" && cmd != "SEARCH")
		continue;
	  std::cout << "cmd = " << cmd << '\n';
	  
	}
  return (0);
}
