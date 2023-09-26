class Contact
{
private:
   
public:
    Contact(/* args */);
    ~Contact();
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret;
};

Contact::Contact(/* args */)
{
    std::cout << "Contact created"
}

Contact::~Contact()
{
    std::cout << "Contact  destroy"
}


class PhoneBook
{
private:
    int amount_contact;
    Contact contacts[8];
public:
    PhoneBook(/* args */);
    ~PhoneBook();
    add( std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string dark_secret);
    search();
    exit();
};

PhoneBook::PhoneBook(/* args */)
{
    this->amount_contact = 0;
    std::cout << "PhoneBook created"
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destroy"

}

PhoneBook::add( std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string dark_secret){
    Contact newContact;

    
}