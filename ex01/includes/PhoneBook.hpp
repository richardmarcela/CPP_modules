#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> //cin, cout, endl
#include <cstdlib> //exit macro
#include <string>
#include "Contact.hpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;

#define MAX_INDEX 7

class   PhoneBook {
    //por default private
    Contact contacts[8];
    //precisa ser static para poder ser redefinida fora da classe
    static int index;

    public:
        PhoneBook() {};
        void addContact();
        void searchContact();
};

#endif