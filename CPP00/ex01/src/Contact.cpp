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

void Contact::setNickname(string nick)
{
    this->nickname = nick;
}

void Contact::setPhoneNumber(string phoneNumber)
{
    this->phone_number = phoneNumber;
}

void Contact::setDarkestSecret(string darkestSecret)
{
    this->darkest_secret = darkestSecret;
}

string Contact::getFirstName(void)
{
    return first_name;
}

string Contact::getLastName(void)
{
    return last_name;
}

string Contact::getNickname(void)
{
    return nickname;
}

string Contact::getPhoneNumber(void)
{
    return phone_number;
}

string Contact::getDarkestSecret(void)
{
    return darkest_secret;
}