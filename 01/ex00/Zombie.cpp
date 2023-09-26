#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie "<< this->name <<" lives" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "zombie "<< this->name <<" dead" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie * newZombie(std::string name){
    return new Zombie(name);
}

void randomChump(std::string name){
    Zombie zombie(name);
    zombie.announce();
}
