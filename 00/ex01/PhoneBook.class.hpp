

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact.class.hpp"

class PhoneBook
{

public:
    PhoneBook(void);
    ~PhoneBook(void);
    void 	addContact(Contact &contact);
    void	searchContacts(void);
    
private:
    Contact 	contacts[8];
    int 		indexOfRegister;
    int 		amountContact;
	void		printContact(int index);
    void		printPhoneBook(void);
	void		setIndexValid(int &index);
};



#endif