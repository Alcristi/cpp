#include <iostream>
# include "PhoneBook.class.hpp"

void showCommands(){
    std::cout << std::endl << "ADD: Add a new contact" << std::endl;
	std::cout << "SEARCH: Show contacts" << std::endl;
	std::cout << "EXIT: Exit of the list" << std::endl;
	std::cout << "Type an option: ";
}

void registerContact(Contact &contact){
    std::string textInput [] = {
        "first name: ",
        "last name: ",
        "nickname: ",
        "phone number:",
        "darkest secret:"};
    int index = 0;
    std::string data;

    while(index < 5)
    {
        std::cout << "type your " << textInput[index] << std::endl;
        std::getline(std::cin,data);
        if (data.empty())
        {
            std::cout << "field isn't empty" << std::endl;
            continue ;
        }
        if (index == 0)
            contact.setFirstName(data);
        if (index == 1)
            contact.setLastName(data);
        if (index == 2)
            contact.setNickname(data);
        if (index == 3)
            contact.setPhoneNumber(data);
        if (index == 4)
            contact.setDarkestSecret(data);
        index++;
    }

}

int main(void)
{
    PhoneBook phoneBook;
    Contact newContact;
    std::string command = "";

    while(command.compare("EXIT"))
    {
       showCommands();

       std::getline(std::cin , command);
    
       if(!command.compare("ADD"))
        {
            registerContact(newContact);
            phoneBook.addContact(newContact);
        }
        else if (!command.compare("SEARCH"))
        {
            phoneBook.searchContacts();
        }
       

    }
    return 0;
}

