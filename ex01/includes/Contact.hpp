#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string> // cout, endl

using std::string;

class Contact {
    string first_name;
    string last_name;
    string phone_number;

    public:
        void setFirstName(string str);
        void setLastName(string str);
        void setPhoneNumber(string str);

        string getFirstName();
        string getLastName();
        string getPhoneNumber();
};
 
#endif