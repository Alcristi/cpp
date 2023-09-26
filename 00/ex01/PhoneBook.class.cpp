#include "PhoneBook.class.hpp"
#include <iostream>
#include <iomanip>


std::string truncate(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

PhoneBook::PhoneBook(void)
{
    this->amountContact = 0;
    this->indexOfRegister = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::addContact(Contact &contact)
{

    if (this->amountContact == 8 && this->indexOfRegister == 8)
        this->indexOfRegister = 0;

    this->contacts[this->indexOfRegister] = contact;

    this->indexOfRegister++;
    if (this->amountContact < 8)
        this->amountContact++;
}

void PhoneBook::printPhoneBook(void)
{

    int count = 0;

    while (count < this->amountContact)
    {
        std::cout << std::setw(10) << count + 1 << "|";
        std::cout << std::setw(10) << truncate(this->contacts[count].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[count].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[count].getNickname()) << std::endl;

        count++;
    }
}

void PhoneBook::printContact(int index)
{
    std::cout << "First Name: " << this->contacts[index - 1].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contacts[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contacts[index - 1].getNickname() << std::endl;
    std::cout << "Phone Number: " << this->contacts[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index - 1].getDarkestSecret() << std::endl;
}

void PhoneBook::setIndexValid(int &index)
{
    std::cin >> index;
    std::cin.ignore();
    if (index <= 0 || index > this->amountContact)
    {
        std::cout << "Range index invalid, type again"<< std::endl;
        this->setIndexValid(index);
    }
    
}

void PhoneBook::searchContacts(void)
{   
    int index;

    this->printPhoneBook();
    std::cout << "Choice a index: ";
    this->setIndexValid(index);
    this->printContact(index);


}