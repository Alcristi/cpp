#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("ClapTrapTron"),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor ClapTrap Default" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):_name(name),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor ClapTrap with name " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name,unsigned int hitPoints,unsigned int energyPoints, unsigned int attackDamage):_name(name),_hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << "Constructor ClapTrap with attributes dynamic " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){

    std::cout << "Constructor copy ClapTrap" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src){
    std::cout << "Overload of assignment ClapTrap" << std::endl;
    if(this != &src)
    {
        _name = src._name;
        _hitPoints = src._hitPoints;
        _attackDamage = src._attackDamage;
        _energyPoints = src._energyPoints;
    }
    return *this;

}

ClapTrap::~ClapTrap(void){
    std::cout << "Destructor ClapTrap " << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (!(_hitPoints && _energyPoints))
    {
        std::cout  
        << "The clap track is with hit point : " 
        << _hitPoints 
        << " e energy point : " 
        << _energyPoints 
        << " That's why he can't attack" 
        << std::endl;
    }
    else 
    {
        std::cout 
        << "ClapTrap " 
        << _name 
        << " attacks "
        << target
        << " causing "
        <<  _attackDamage
        << " point of damage!"
        << std::endl;
        _energyPoints--;
    }

}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout   << _name 
                <<  " take " 
                << amount 
                << " of damage!" 
                << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!(_hitPoints && _energyPoints))
    {
        std::cout  
        << "Is with hit point : " 
        << _hitPoints 
        << " e energy point : " 
        << _energyPoints 
        << " That's why he can't recover" 
        << std::endl;
    }
    else 
    {
        std::cout   << _name 
                    <<  " repaired " 
                    << amount 
                    << " of hit points!" 
                    << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }

}

std::string ClapTrap::getName(void)const{
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void)const{
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void)const{
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void)const{
    return this->_attackDamage;
}

void    ClapTrap::setName(const std::string &name){
    this->_name = name;
}

void    ClapTrap::setHitPoints(unsigned int hitPoints){
    this->_hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints(unsigned int energyPoints){
    this->_energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage(unsigned int attackDamage){
    this->_attackDamage = attackDamage;
}