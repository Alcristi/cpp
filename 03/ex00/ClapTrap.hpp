#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
public:
    /*Construtores*/
    ClapTrap(void);
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &src);
    /*Destrutores*/
    ~ClapTrap(void);
   /*Sobrecarga do operador de atribuição =*/
    ClapTrap & operator=(ClapTrap const &src);
    
    void attack(const std::string  &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif