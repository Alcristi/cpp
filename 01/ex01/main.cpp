#include "Zombie.hpp"

int main(void)
{
    Zombie *horda = zombieHorde(10,"Ferdinando");

    for (int i = 0; i < 10; i++)
        horda[i].announce();
    delete[] horda;
}