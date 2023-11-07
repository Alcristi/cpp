#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "I think I'm losing my memory... " << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << "I'm sorry, Dave. I'm afraid I can't do that." << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << "Does this code smell funny to you ?" << std::endl;
    return;
}

void Harl::complain(std::string level)
{

    void (Harl::*func_ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*func_ptr[i])();
            return;
        }
    }
    std::cerr << "Unknown level: " << level << std::endl;

    return;
}