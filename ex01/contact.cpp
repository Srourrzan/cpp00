#include "contact.hpp"

Contact::Contact()
  : m_is_empty (true) {}

Contact::~Contact() {}

Contact::Contact(std::string nickname, std::string last, std::string first, std::string number, std::string secret)
  : m_is_empty (true)
  , m_nickname (nickname)
  , m_last_name (last)
  , m_first_name (first)
  , m_phonenumber (number)
  , m_darkest_secret (secret)
{}

bool Contact::isEmpty() const
{
  return (m_is_empty);
}

void Contact::setFilled()
{
  m_is_empty = false;
}

std::string Contact::getFirstName() const
{
  return (m_first_name);
}

std::string Contact::getLastName() const
{
  return (m_last_name);
}

std::string Contact::getNickname() const
{
  return (m_nickname);
}

std::string Contact::getPhonenumber() const
{
  return (m_phonenumber);
}

std::string Contact::getDarkestSecret() const
{
  return (m_darkest_secret);
}
