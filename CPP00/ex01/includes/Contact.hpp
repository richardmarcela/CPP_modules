#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string> // cout, endl

using std::string;

class Contact {
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;

    public:
        void setFirstName(string str);
        void setLastName(string str);
        void setPhoneNumber(string str);
        void setDarkestSecret(string str);
        void setNickname(string str);

        string getFirstName(void);
        string getLastName(void);
        string getNickname(void);
        string getPhoneNumber(void);
        string getDarkestSecret(void);
};
 
#endif