#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;

	do {
		cout << "\nLevels: DEBUG | INFO | WARNING | ERROR\n> ";
		getline(std::cin, input);
		harl.complain(input);

	} while (!input.empty());

	return EXIT_SUCCESS;
}