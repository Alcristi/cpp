#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const & src);
    ~DiamondTrap();
    DiamondTrap & operator=(DiamondTrap const & rhs);
    void attack(std::string const &target);
    void whoAmI(void);
};

#endif