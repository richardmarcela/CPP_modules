#include "megaphone.hpp"

int main(int argc, char **argv)
{
    std::string str;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return EXIT_SUCCESS;
    }
    for (int i = 1; i < argc; i++)
    {
        str = std::string(argv[i]);
        for (int j = 0; j < (int)str.length(); j++)
            std::cout << (char)std::toupper(str[j]);
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
