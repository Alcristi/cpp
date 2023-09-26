#include "Zombie.hpp"

int main(void)
{
    Zombie zombie("carlos");
    Zombie *zombieAlloc = newZombie("Ferdinando");

    zombie.announce();
    zombieAlloc->announce();

    randomChump("carlos ferdinando");
    delete zombieAlloc;
    
}