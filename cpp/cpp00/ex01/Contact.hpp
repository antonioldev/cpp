#ifndef CONTACT_DOT_HPP
#define CONTACT_DOT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std :: string	first_name;
	std :: string	last_name;
	std :: string	nick_name;
	std :: string	phone_num;
	std :: string	secret;
public:
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_number(void);
	std::string	get_secret(void);
	void		set_first_name(std::string);
	void		set_last_name(std::string);
	void		set_nickname(std::string);
	void		set_number(std::string);
	void		set_secret(std::string);
};

#endif