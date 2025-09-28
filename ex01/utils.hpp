#ifndef UTILS_H
# define UTILS_H

#include <iomanip>
#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

void printHeader();
void printBorders();
std::string prompt();
void setContactData(PhoneBook &phb);
void fetchContactData(PhoneBook &phb);
void truncateOutput(const std::string &word);

#endif 
