#include "PresidentialPardonForm.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("PresidentialPardonForm", target, 25, 5)
{
	// std::cout << "PresidentialPardonForm Created\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other) {}
	return *this;
}

/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm Destroyed\n";
}

/*******************************************************************/
/*                             EXECUTE                             */
/*******************************************************************/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->isItSigned() == false)
	{
		std::cout << R << executor.getName() << RST;
		throw AFormNotSignedException();
	}
	if (this->getLevelExec() >= executor.getGrade())
		std::cout << G << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n" RST;
	else
	{
		std::cout << R << executor.getName()  << RST;
		throw GradeTooLowException();
	}
}

AForm* PresidentialPardonForm::makeForm(AForm *form, std::string form_name, std::string target_name)
{
	if (form == NULL && form_name == "presidential pardon")
		return (new PresidentialPardonForm(target_name));
	return (form);
}