#include "Contact.hpp"

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nick_name);
}

std::string	Contact::get_number(void)
{
	return (this->phone_num);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nick_name = str;
}

void	Contact::set_number(std::string str)
{
	this->phone_num = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}