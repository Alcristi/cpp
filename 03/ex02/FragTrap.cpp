#include "FragTrap.hpp"
#include <iostream>
FragTrap::FragTrap(void){
    std::cout << "FragTrap constructor default called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap "<< this->getName() <<" constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)  {
    std::cout << "FragTrap "<< this->getName() <<" constructor copy called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap "<< this->getName() <<" destructor called" << std::endl;
}   

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    std::cout << "Overload of assignment ClapTrap"  << std::endl;
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

void	FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap "<< this->getName() <<" highFivesGuys called" << std::endl;
}