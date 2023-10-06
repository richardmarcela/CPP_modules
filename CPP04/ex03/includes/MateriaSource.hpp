#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        int amount;
        AMateria *sources[4];

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource(void);

        MateriaSource &operator=(const MateriaSource &assign);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif // !MATERIASOURCE_HPP