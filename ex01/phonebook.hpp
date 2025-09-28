#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "string"
#include "contact.hpp"

class PhoneBook
{
public:
  PhoneBook();
  ~PhoneBook();
  int addContact(std::string &first, std::string &last, std::string &nickname,
	std::string &phone_number, std::string &secret);
  void displayPhoneBook() const;
  const Contact (&getContacts() const)[8];
  Contact (&getContacts())[8];
  
private:
  Contact m_contacts[8];
  
};

#endif
