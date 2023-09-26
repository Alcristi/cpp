#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "This is a Weapon of type " << type << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "This is a Weapon of type " << type << " was destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}