#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        /*Construtores*/
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        
        /*Destrutores*/
        ~FragTrap(void);

        /*Sobrecarga do operador de atribuição =*/
        FragTrap & operator=(FragTrap const & rhs);
        
        void	highFivesGuys(void);
};