#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(/* args */)
{
   this->firstName = "";
   this->lastName = "";
   this->nickname = "";
   this->darkestSecret = "";
   this->phoneNumber = "";

}

Contact::~Contact()
{
}

void Contact::setFirstName(std :: string firstName)
{
    this->firstName = firstName;
}
void Contact::setLastName(std :: string lastName)
{
    this->lastName = lastName;
}
void Contact::setNickname(std :: string nickname)
{
    this->nickname = nickname;
}
void Contact::setPhoneNumber(std :: string phoneNumber)
{
    while(!this->isValidPhoneNumber(phoneNumber))
    {
        std::cout << "character invalid, only numbers" << std::endl;
        std::cout << "type your phone number valid: ";
        std::getline(std::cin,phoneNumber);
    }
    this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std :: string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}
std::string Contact::getLastName()
{
    return this->lastName;
}
std::string Contact::getNickname()
{
    return this->nickname;
}
std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}
std::string Contact::getDarkestSecret()
{

    return this->darkestSecret;
}

bool Contact::isValidPhoneNumber(std::string phoneNumber)
{
    size_t index = 0;
    while (index < phoneNumber.length()) 
    {
        if (!std::isdigit(phoneNumber[index])) 
            return false;
        
        index ++;
    }
    return true;
}