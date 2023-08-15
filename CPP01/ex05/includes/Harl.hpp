#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <cstdlib>

using std::cout;
using std::endl;

class Harl {
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
        void complain(std::string level);
        Harl(void);
        ~Harl(void);
};

#endif // !HARL_H