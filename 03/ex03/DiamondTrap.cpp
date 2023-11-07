#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :_name("DiamondTrapTron")
{
    std::cout << "DiamondTrap constructor default called" << std::endl;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor with name :" << name << std::endl;
    this->_name = name;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cp)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = cp;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cp)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &cp){
        this->_name = cp._name;
        this->setHitPoints(cp.getHitPoints());
        this->setEnergyPoints(cp.getEnergyPoints());
        this->setAttackDamage(cp.getAttackDamage());
    }
    
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << this->_name << " and his ClapTrap name is " << ClapTrap::getName() << std::endl;
}