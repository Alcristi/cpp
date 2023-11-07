#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor default called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);

}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor with name :" << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cp)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = cp;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cp)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &cp){
        this->setName(cp.getName());
        this->setHitPoints(cp.getHitPoints());
        this->setEnergyPoints(cp.getEnergyPoints());
        this->setAttackDamage(cp.getAttackDamage());
    }
    
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

