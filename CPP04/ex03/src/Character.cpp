#include "Character.hpp"

Character::Character(void) : equipped(0), name("") 
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::Character(std::string name) 
{
    this->equipped = 0;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

Character::Character(const Character &copy) 
: equipped(0), name(copy.getName())
{
    for (int i = 0; i < copy.equipped; i++)
        this->equip(copy.materias[i]->clone());
    for (int i = this->equipped; i < 4; i++)
        this->materias[i] = NULL;
}

Character::~Character(void)
{
    for (int i = 0; i < this->equipped; i++)
        delete this->materias[i];
}

Character &Character::operator=(const Character &assign)
{
    this->name = assign.name;
    for (int i = 0; i < this->equipped; i++)
        delete this->materias[i];
    this->equipped = 0;
    for (int i = this->equipped; i < 4; i++)
        this->materias[i] = NULL;
    return (*this);
}

std::string const &Character::getName(void) const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (this->equipped == 4 || m == NULL)
        return ;
    for (int i = 0; i < this->equipped; i++)
        if (this->materias[i] == m)
            return ;
    this->materias[this->equipped++] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->equipped || this->materias[idx] == NULL)
        return ;
    for (int i = idx; i < 3; i++)
    {
        this->materias[i] = this->materias[i + 1];
        this->materias[i + 1] = NULL;
    }
    this->equipped--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= this->equipped || this->materias[idx] == NULL)
        return ;
    this->materias[idx]->use(target);
}