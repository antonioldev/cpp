#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->contact_avaible = 0;
	this->oldest_contact = 0;
}


std :: string   cut_if_necessary(std :: string str)
{
	std :: string  str_to_print;

	str_to_print = str;
	if (str_to_print.length() > 10)
	{
		str_to_print.resize(10);
		str_to_print[9] = '.';
	}
	return (str_to_print);
}

std::string get_string(void)
{
	std::string str;
	str = "";
	do
	{
		std::getline(std::cin, str);
		
		// str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    } while (str.empty());
	return (str);
}

void PhoneBook::add_contact()
{
	std :: string	first_name;
	std :: string	last_name;
	std :: string	nick_name;
	std :: string	phone_num;
	std :: string	secret;
	int	index;

	std :: cout << "INSERT FIRST NAME: ";
	first_name = get_string();
	std :: cout << "INSERT LAST NAME: ";
	last_name = get_string();
	std :: cout << "INSERT NICKNAME: ";
	nick_name = get_string();
	std :: cout << "INSERT PHONE NUMBER: ";
	phone_num = get_string();
	std :: cout << "INSERT DARKEST SECRET: ";
	secret = get_string();
	if (oldest_contact == 8)
		oldest_contact = 0;
	index = oldest_contact;
	contact[index].set_first_name(first_name);
	contact[index].set_last_name(last_name);
	contact[index].set_nickname(nick_name);
	contact[index].set_number(phone_num);
	contact[index].set_secret(secret);
	if (contact_avaible < 8)
		contact_avaible++;
	oldest_contact++;
}

void PhoneBook::serch_contact()
{
	int	 index;

	index = 0;
	while (index < contact_avaible)
	{
		std::cout << std::setw(10) << index
        << " | "
        << std::setw(10) << cut_if_necessary(contact[index].get_first_name())
        << " | "
    	<< std::setw(10) << cut_if_necessary(contact[index].get_last_name())
        << " | "
        << std::setw(10) << cut_if_necessary(contact[index].get_nickname()) << std::endl;
		index++;
	}
	std :: cout << "INSERT INDEX TO SEARCH: ";
		std :: cin >> index;
	if (std::cin.fail())
    {
		std::cin.clear();std::cin.ignore();
		std::cout << "Invalid input. Please enter a number!" << std::endl;
		return ;
    }
	if (index > 7)
	{
		std :: cout << "Not Enough Memory!" << std :: endl;
		std :: cout << "Can store only 8 numbers (0 to 7)!" << std :: endl;
		return ;
	}
	else if (index >= contact_avaible && index < 8)
	{
		std :: cout << "This entry is empty!" << std :: endl;
		return ;
	}
	else if (index < 0)
	{
		std :: cout << "Index can only be a positive number!" << std :: endl;
		return ;
	}
	else
	{
		std::cout << index << std::endl;
		std::cout << contact[index].get_first_name() << std::endl;
		std::cout << contact[index].get_last_name() << std::endl;
		std::cout << contact[index].get_nickname() << std::endl;
		std::cout << contact[index].get_number() << std::endl;
		std::cout << contact[index].get_secret() << std::endl;
	}
}