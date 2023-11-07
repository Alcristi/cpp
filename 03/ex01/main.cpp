#include "ScavTrap.hpp"
#include <iostream>

int main() {
	
		ScavTrap cp("Pikachu");
		cp.attack("Squirtle");
		cp.takeDamage(9);
		cp.beRepaired(5);
		cp.attack("Squirtle");
		cp.takeDamage(9);
		cp.beRepaired(1);
	// }
	std::cout << std::endl;
		
}