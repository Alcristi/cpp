#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(Cat const & src);
        ~Cat(void);

        Cat & operator=(Cat const & rhs);

        void makeSound(void) const;
};

std::ostream & operator<<(std::ostream & o, Cat const & rhs);