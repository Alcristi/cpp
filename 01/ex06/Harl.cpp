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
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I think I'm losing my memory... " << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I'm sorry, Dave. I'm afraid I can't do that." << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "Does this code smell funny to you ?" << std::endl;
    return;
}

void Harl::complain(std::string level)
{

    void (Harl::*func_ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)

            index = i;
    }

    switch (index)
    {
    case 0:
        (this->*func_ptr[index++])();
    case 1:
        (this->*func_ptr[index++])();
    case 2:
        (this->*func_ptr[index++])();
    case 3:
        (this->*func_ptr[index++])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return;
}