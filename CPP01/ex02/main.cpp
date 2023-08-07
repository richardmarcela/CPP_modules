#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    cout << "Memory address of the string variable: " << &str << endl;
    cout << "Memory address held by stringPTR: " << stringPTR << endl;
    cout << "Memory address held by stringREF: " << &stringREF << endl;

    cout << endl << "Value of the string variable: " << str << endl;
    cout << "Value pointed to by stringPTR: " << *stringPTR << endl;
    cout << "Value pointed to by stringREF: " << stringREF << endl;
}