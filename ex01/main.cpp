#include "contact.hpp"
#include "phonebook.hpp"
#include "utils.hpp"

int main()
{
  std::string cmd;
  PhoneBook phb;
  
  while (1)
	{
		cmd = prompt();
	  	if (cmd == "ADD")
			setContactData(phb);
		else if (cmd == "SEARCH")
		  fetchContactData(phb);
	  	else if (cmd == "EXIT")
			break;
	  	else
			continue;
	}
  return (0);
}
