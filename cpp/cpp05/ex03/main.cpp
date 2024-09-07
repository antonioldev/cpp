#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

/*
	ShrubberyCreationForm: Required grades: sign 145, exec 137
	RobotomyRequestForm: Required grades: sign 72, exec 45
	PresidentialPardonForm: Required grades: sign 25, exec 5
*/

int main()
{
	Intern someRandomIntern;
	AForm* form1 = someRandomIntern.makeForm("shrubbery creation", "Austin");
	// std::cout << *form1 << std::endl;
	std::cout << std::endl;
	AForm* form2 = someRandomIntern.makeForm("robotomy request", "Bender");
	// std::cout << *form2 << std::endl;
	std::cout << std::endl;
	AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Austin");
	// std::cout << *form3 << std::endl;
	std::cout << std::endl;
	
	AForm* form4;
	form4 = someRandomIntern.makeForm("rubbish", "Austin");
	
	delete(form1);
	delete(form2);
	delete(form3);
	delete(form4);

}