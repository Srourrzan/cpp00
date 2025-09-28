#include "utils.hpp"

std::string prompt()
{
  std::string value;
  
  std::cout << "Enter: ADD (to add a new contact), SEARCH (to search a new contact), or EXIT.\n";
  std::getline(std::cin, value);
  return (value);
}

void printBorders()
{
  std::cout.fill('-');
  std::cout << std::setw(44) << '-';
  std::cout.fill(' ');
  std::cout << '\n';
}

void truncateOutput(const std::string &word)
{
  size_t max_len = 10;

  if (word.length() > max_len)
	std::cout << std::setw(9) << std::left << word.substr(0, max_len - 1) << ".|";
  else if (word.length() <= max_len)
	std::cout << std::setw(10) << std::left << word << '|';
}

void printHeader()
{
  printBorders();
  std::cout << '|';
  truncateOutput("ID");
  truncateOutput("Firat Name");
  truncateOutput("Last Name");
  truncateOutput("Nick Name");
  std::cout << '\n';
}
