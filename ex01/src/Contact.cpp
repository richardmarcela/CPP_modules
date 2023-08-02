#include "Contact.hpp"

using std::string;

void Contact::setFirstName(string firstName)
{
    this->first_name = firstName; 
}

void Contact::setLastName(string lastName)
{
    this->last_name = lastName;
}

void Contact::setPhoneNumber(string phoneNumber)
{
    this->phone_number = phoneNumber;
}

string Contact::getFirstName(void)
{
    return first_name;
}

string Contact::getLastName(void)
{
    return last_name;
}

string Contact::getPhoneNumber(void)
{
    return phone_number;
}