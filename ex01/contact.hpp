#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
public:
  Contact();
  Contact(std::string first, std::string last, std::string nickname, std::string number, std::string secret);
  ~Contact();
  bool isEmpty() const;
  void setFilled();
  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickname() const;
  std::string getPhonenumber() const;
  std::string getDarkestSecret() const;

private:
  std::string m_first_name;
  std::string  m_last_name;
  std::string  m_nickname;
  std::string  m_phonenumber;
  std::string  m_darkest_secret;
  bool m_is_empty;
};

#endif
