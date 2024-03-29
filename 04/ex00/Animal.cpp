#include "Animal.hpp"
#include <iostream> 

Animal::Animal(void) {
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string type) {
    std::cout << "Animal constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(Animal const & src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

std::string Animal::getType(void) const {
    return this->type;
}

void Animal::makeSound(void) const {
    std::cout << "Animal sound" << std::endl;
}

std::ostream &operator<<(std::ostream & o, Animal const & rhs) {
    o << rhs.getType();
    return o;
}