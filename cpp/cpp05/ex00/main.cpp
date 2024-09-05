#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("Antonio", 450);
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n";
	try
	{
		Bureaucrat A("Luigi", -50);
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n";
	try
	{
		Bureaucrat A("Mario", 50);
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n";
	try
	{
		Bureaucrat A("Carlo", 2);
		std::cout << A << std::endl;;
		A.increaseGrade();
		std::cout << A << std::endl;;
		A.increaseGrade();
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n";
	try
	{
		Bureaucrat A("Francesco", 149);
		std::cout << A << std::endl;;
		A.decreaseGrade();
		std::cout << A << std::endl;;
		A.decreaseGrade();
		std::cout << A << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
	std::cout << "*********************************************************\n";
}