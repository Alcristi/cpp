#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & src) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs) {
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "Woof" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Dog const & rhs) {
    o << rhs.getType();
    return o;
}