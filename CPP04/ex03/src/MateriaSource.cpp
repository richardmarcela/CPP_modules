#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : amount(0)
{
    for (int i = 0; i < 4; i++)
        this->sources[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : amount(0)
{
    for (int i = 0; i < copy.amount; i++)
        this->learnMateria(copy.sources[i]->clone());
    for (int i = 0; i < 4; i++)
        this->sources[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < this->amount; i++)
        delete this->sources[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
    for (int i = 0; i < this->amount; i++)
        delete this->sources[i];
    this->amount = 0;
    for (int i = 0; i < assign.amount; i++)
        this->learnMateria(assign.sources[i]->clone());
    for (int i = 0; i < 4; i++)
        this->sources[i] = NULL;
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->amount == 4 || m == NULL)
        return ;
    for (int i = 0; i < this->amount; i++)
        if (this->sources[i] == m)
            return ;
    this->sources[this->amount++] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->amount; i++)
        if (this->sources[i]->getType() == type)
            return (this->sources[i]->clone());
    return (NULL);
}