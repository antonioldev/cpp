#include "RobotomyRequestForm.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: AForm("RobotomyRequestForm", target, 72, 45)
{
	// std::cout << "RobotomyRequestForm Created\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other) {}
	return *this;
}

/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm Destroyed\n";
}

/*******************************************************************/
/*                             EXECUTE                             */
/*******************************************************************/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->isItSigned() == false)
	{
		std::cout << R << executor.getName();
		throw AFormNotSignedException();
	}
	std::cout << "Make some noizzzzzzzzzzzzzzzzzzzzzzz\n"; 
	if (this->getLevelExec() >= executor.getGrade())
		std::cout << G << this->getTarget() << " has been robotomized successfully 50% of the time\n" RST;
	else
	{
		std::cout << R << this->getTarget() << " robotomy failed\n" RST;
		// std::cout << R << executor.getName();
		// throw GradeTooLowException();
	}
}

AForm* RobotomyRequestForm::makeForm(AForm *form, std::string form_name, std::string target_name)
{
	if (form == NULL && form_name == "robotomy request")
		return (new RobotomyRequestForm(target_name));
	return (form);
}