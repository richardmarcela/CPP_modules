#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main (void)
{
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;

    /* // Create a MateriaSource and learn a Materia
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());

    // Create a Character
    ICharacter* me = new Character("me");

    // Equip a Materia
    AMateria* iceMateria = src->createMateria("ice");
    me->equip(iceMateria);

    // Attempt to equip more Materias than the character's inventory can hold
    AMateria* extraMateria = src->createMateria("cure"); // Assuming "cure" is another Materia type
    me->equip(extraMateria);

    // Clean up
    delete me;
    delete src; */
}