#include "contact.hpp"

Contact::Contact()
  : m_is_empty (true) {}

Contact::~Contact() {}

Contact::Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret)
  : m_first_name (first)
  , m_last_name (last)
  , m_nickname (nickname)
  , m_phonenumber (number)
  , m_darkest_secret (secret)
  , m_is_empty (true)
{}

bool Contact::isEmpty() const
{
  return (m_is_empty);
}

void Contact::setFilled()
{
  m_is_empty = false;
}
