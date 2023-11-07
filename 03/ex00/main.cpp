#include "ClapTrap.hpp"
#include <iostream>

int main() {
	
	ClapTrap cp;
	ClapTrap cp1(cp);
	ClapTrap cp2 = cp1;
	ClapTrap cp4("Pikachu");
	ClapTrap cp3;
	
	cp3 = cp4;
	for(int i = 0; i < 11; i++)
		cp4.attack("Squirt");

	cp4.takeDamage(5);
	
	
	
	
}