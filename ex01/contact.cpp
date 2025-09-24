#include "contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret)
{
  this->m_first_name = first;
  this->m_last_name = last;
  this->m_nickname = nickname;
  this->m_phonenumber = number;
  this->m_darkest_secret = secret;
}

Contact::~Contact() {}
