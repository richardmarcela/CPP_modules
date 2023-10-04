#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

class Brain {
    protected:
        std::string ideas[100];
    
    public:
        Brain(void);
        Brain(const Brain &copy);
        ~Brain(void);

        Brain &operator=(const Brain &assign);
};

#endif // !BRAIN_HPP