#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void) {
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << endl;
}

void Harl::info(void) {
    cout << "I cannot believe adding extra bacon costs more money." << endl;
    cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << endl;
}

void Harl::warning(void) {
    cout << "I think I deserve to have some extra bacon for free." << endl;
    cout << "I’ve been coming for years whereas you started working here since last month.\n" << endl;
}

void Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level) {

    /* array de ponteiros que guarda referencias a funcoes membras do harl */
    void (Harl::*funcs[4])() = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    /* array de strings para guardar os inputs possiveis */
    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4 ; i++)
        if (levels[i] == level)
        {
            switch(i) 
            {
                default:
                    cout << "[ Probably complaining about insignificant problems ]" << endl;
                    break;
                case 0:
                    cout << "[ DEBUG ]" << endl;
                    (this->*funcs[0])();
                case 1:
                    cout << "[ INFO ]" << endl;
                    (this->*funcs[1])();
                case 2:
                    cout << "[ WARNING ]" << endl;
                    (this->*funcs[2])();
                case 3:
                    cout << "[ ERROR ]" << endl;
                    (this->*funcs[3])();
                    break;
            }
        }

}