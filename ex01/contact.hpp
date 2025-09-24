#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
//#include "contact.cpp"

class Contact
{
public:
  Contact();
  Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
  ~Contact();

private:
  std::string m_first_name;
  std::string  m_last_name;
  std::string  m_nickname;
  std::string  m_phonenumber;
  std::string  m_darkest_secret;
};

#endif
