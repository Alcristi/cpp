#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & src) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "Meow" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Cat const & rhs) {
    o << rhs.getType();
    return o;
}