#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> // cout, endl
#include "Contact.hpp"

class   PhoneBook {
    private:
        Contact contacts[8];

    public:
        //Empty Constructor 
        PhoneBook (){};
        void addContact(std::string);
        void searchContact();
};

#endif