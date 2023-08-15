#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

int main(int argc, char **argv) {
    if (argc != 4) {
        cerr << "Wrong number of parameters!" << endl;
        return EXIT_FAILURE;
    }

    /* abre o ficheiro cujo nome é o argv[1] em modo de leitura */
    std::ifstream file(argv[1], std::ifstream::in);

    if (!file.is_open())
    {
        cerr << "Failed to open file!" << endl;
        return EXIT_FAILURE;
    }

    /* guardo s1, s2 e crio uma variavel para guardar o content*/
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string content;

    /* guardo todo o conteudo do ficheiro até o final do mesmo */
    std::getline(file, content, '\0');

    /* crio o novo ficheiro, o nome, e coloco .replace no final */
    std::ofstream new_file;
    std::string new_file_name(argv[1]);
    new_file_name.append(".replace");

    /* associo a instancia a um novo ficheiro */
    new_file.open(new_file_name.c_str());

    /* enquanto houver s1 no ficheiro, esta será apagada e no lugar 
    insiro s2 */
    int i;
    while ((i = content.find(s1)) != -1)
    {
        content.erase(i, s1.length());
        content.insert(i, s2);
    }

    /* atribuo o novo conteudo ao novo ficheiro */
    new_file << content;
    file.close();
    new_file.close();
    return EXIT_SUCCESS;
}