#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie()
{
    std::cout << "zombie lives" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "zombie "<< this->name <<" dead" << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie * zombieHorde(int N, std::string name)
{
    Zombie *zombies =  new Zombie[N];
    for(int i = 0; i < N; i ++)
        zombies[i].setName(name);
    return zombies;
}
