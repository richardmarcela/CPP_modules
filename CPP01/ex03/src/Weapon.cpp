#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

/* 
* Retorna uma referencia a uma constante e não modifica 
* o estado do objeto Weapon.  
*/
const std::string &Weapon::getType(void) const {
    return this->type;
}

void Weapon::setType(std::string type) { 
    this->type = type;
}

