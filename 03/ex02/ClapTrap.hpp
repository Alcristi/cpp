#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    /*Construtores*/
    ClapTrap(void);
    ClapTrap(const std::string &name);
    ClapTrap(const std::string &,unsigned int,unsigned int,unsigned int);
    ClapTrap(const ClapTrap &src);
    /*Destrutores*/
    ~ClapTrap(void);
   /*Sobrecarga do operador de atribuição =*/
    ClapTrap & operator=(ClapTrap const &src);
    /*Gets*/
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    /*Set*/
    void    setName(const std::string &name) ;
    void    setHitPoints(unsigned int hitPoints) ;
    void    setEnergyPoints(unsigned int energyPoints) ;
    void    setAttackDamage(unsigned int attackDamage) ;

    void attack(const std::string  &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif