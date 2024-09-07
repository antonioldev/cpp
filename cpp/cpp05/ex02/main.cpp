#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


/*
	ShrubberyCreationForm: Required grades: sign 145, exec 137
	RobotomyRequestForm: Required grades: sign 72, exec 45
	PresidentialPardonForm: Required grades: sign 25, exec 5
*/

int main()
{
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "***********************NOT SIGNED*************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		PresidentialPardonForm A ("Robot 1");
		std::cout << A << std::endl;
		A.execute(Ant);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*************************SIGNED***************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 5);
		PresidentialPardonForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

		std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*********************SIGNED LOW GRADE********************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		PresidentialPardonForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*************************SIGNED***************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 5);
		RobotomyRequestForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
			std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*********************SIGNED LOW GRADE********************\n";
	try
	{
		Bureaucrat Ant("Antonio", 46);
		RobotomyRequestForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*************************SIGNED***************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 149);
		ShrubberyCreationForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*************************SIGNED***************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 5);
		ShrubberyCreationForm A ("Robot 1");
		std::cout << A << std::endl;
		A.beSigned(Ant);
		A.execute(Ant);
		Ant.executeForm(A);
	}
	catch (const AForm::AFormNotSignedException& e)
	{
		std::cerr << e.what();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
}