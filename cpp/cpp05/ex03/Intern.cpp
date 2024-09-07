#include "Intern.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/
Intern::Intern()
{
	std::cout <<"Intern have been created\n";
}

Intern::Intern(const Intern& other)
{
	(void)other;
	std::cout << "Copy constructor\n";
}

Intern& Intern::operator=(const Intern& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assign constructor\n";
	return (*this);
}


/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/

Intern::~Intern()
{

}

/*******************************************************************/
/*                            EXECUTION                            */
/*******************************************************************/

AForm* Intern::makeForm(std::string form_name, std::string target_name)
{
	AForm	*form;

	form = AForm::makeForm(form_name, target_name);
	if (!form)
		std::cout << R "Form not found" RST<< std::endl;
	else
		std::cout << G "Intern creates " << form_name << RST << std::endl;
	return (form);
}