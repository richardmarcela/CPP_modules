#include <iostream> //cin, cout, endl
#include <cstdlib> //exit macro
#include <string>
#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"

int main(void)
{
    PhoneBook pb;
    std::string s;

    std::cout << "enter a number: " << std::endl;
    std::cin >> s;
    pb.addContact(s);
    std::cout << s << std::endl;

    return EXIT_SUCCESS;
}
