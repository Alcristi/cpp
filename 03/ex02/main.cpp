#include "FragTrap.hpp"
#include <iostream>

int main() {
	{
		FragTrap cp("Pikachu");
		cp.attack("Squirtle");
		cp.takeDamage(9);
		cp.beRepaired(5);
		cp.attack("Squirtle");
		cp.takeDamage(9);
		cp.beRepaired(1);
	}
	std::cout << std::endl;
		
}