#ifndef PHONE_BOOK_DOT_HPP
#define PHONE_BOOK_DOT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
    int     contact_avaible;
	int		oldest_contact;
    Contact contact[8];
	public:
	PhoneBook(void);
    void add_contact();
    void serch_contact();
};


#endif