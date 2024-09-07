#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "***********************WRONG GRADE*************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		Form A ("Form A", 0 ,0);
		std::cout << A << std::endl;
	}
	catch (const Form::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "***********************WRONG GRADE*************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		Form A ("Form A", 151 ,4);
		std::cout << A << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "***********************SIGNATURE*************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		Form A ("Form A", 11 ,4);
		std::cout << A << std::endl;
		A.beSigned(Ant);
		std::cout << A << std::endl;
		A.beSigned(Ant);
	}
	catch (const Form::FormAlreadySignedException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "***********************SIGNATURE*************************\n";
	try
	{
		Bureaucrat Ant("Antonio", 10);
		Form A ("Form A", 11 ,4);
		std::cout << A << std::endl;
		Ant.signForm(A);
		A.beSigned(Ant);
		std::cout << A << std::endl;
	}
	catch (const Form::FormAlreadySignedException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";
	std::cout << "************************* " C "TEST" RST "****************************\n";
	std::cout << "*********************SIGNATURE LOW***********************\n";
	try
	{
		Bureaucrat Ant("Antonio", 12);
		Form A ("Form A", 11 ,4);
		std::cout << A << std::endl;
		Ant.signForm(A);
		A.beSigned(Ant);
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n\n\n";

}