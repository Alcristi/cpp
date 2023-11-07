#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        /*Construtores*/
        ScavTrap(void);
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap&);
        /*Destrutores*/
        ~ScavTrap(void);
        /*Sobrecarga do operador de atribuição =*/
        ScavTrap& operator=(const ScavTrap&);

        void attack(std::string const &target);
        void guardGate(void);
};
#endif