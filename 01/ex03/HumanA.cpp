#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) 
{
    std::cout << "Create Human A" << std::endl;
  
}

HumanA::~HumanA()
{
    std::cout << "Destroy Human A" << std::endl;

}

void HumanA::attack(){
    std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}