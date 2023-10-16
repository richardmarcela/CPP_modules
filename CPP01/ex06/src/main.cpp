#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2 || !argv[1])
	{
		cerr << "Invalid arguments!" << '\n';
		cout << "./harlFilter <level>\nlevels: DEBUG, INFO, WARNING, ERROR" << endl;
		return EXIT_FAILURE;
	}
	harl.complain(argv[1]);	
	return EXIT_SUCCESS;
}