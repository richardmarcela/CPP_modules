#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook pb;
    string option;

    while (1)
    {
        cout << "\nPhoneBook:\n->ADD\n->SEARCH\n->EXIT\n" << endl;
        cout << "Option: ";
        getline(cin, option);
        if (option == "ADD")
        {
            pb.addContact();
            continue;
        }
        if (option == "SEARCH")
        {
            pb.searchContact();
            continue;
        }
        if (option == "EXIT")
            break;
        cout << "Invalid command!" << endl;
    }
    return EXIT_SUCCESS;
}
