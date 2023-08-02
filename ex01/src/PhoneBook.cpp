#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib> //atoi

int PhoneBook::index = 0;

void PhoneBook::addContact()
{
    string input;

    if (index > 7)
    {
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];
        index -= 1;
    }

    cout << "First Name: ";
    getline(cin, input);
    contacts[index].setFirstName(input);

    cout << "Last Name: ";
    getline(cin, input);
    contacts[index].setLastName(input);

    cout << "Phone Number: ";
    getline(cin, input);
    contacts[index].setPhoneNumber(input);

    this->index += 1;

    cout << "Contact added successfully ✅" << endl;
}

void display(string field)
{
    //alinho o texto a direita e limito a 10 caracteres
    //se for maior que 10, o ultimo vira um "."
    if (field.size() > 10)
        cout << std::setw(9) << std::right << field.substr(0, 9) << "." << "|";
    else
        cout << std::setw(10) << std::right << field << "|";
}

void PhoneBook::searchContact(void)
{
    if (PhoneBook::index == 0)
    {
        cout << "There are no contacts in your phonebook!" << endl;
        return;
    }

    cout << "\n|     Index|First Name| Last Name|" << endl;
    for (int i = 0; i < this->index; i++)
    {
        cout << "|" << std::right << std::setw(10) << i << "|";
        display(contacts[i].getFirstName());
        display(contacts[i].getLastName());
        cout << endl;
    }

    string index;
    int to_search_index;
    while (1)
    {
        cout << "Insert the index you would like to search: ";
        getline(cin, index);
        //npos é uma constante especial que representa "not found"
        if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos)
        {
            to_search_index = atoi(index.c_str());
            if (to_search_index <= MAX_INDEX)
                break;
        }
        cin.clear();
        cout << "Invalid input!" << endl;
    }
    if (to_search_index > (this->index - 1))
        cout << "Contact not found!" << endl;
    else
    {
        cout << "\nFirst Name: " << contacts[to_search_index].getFirstName() << endl;
        cout << "Last Name: " << contacts[to_search_index].getLastName() << endl;
        cout << "Phone Number: " << contacts[to_search_index].getPhoneNumber() << endl;
    }
}
