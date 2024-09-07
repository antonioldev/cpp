
#pragma once
#ifndef BUREAUCRAT_DOT_HPP
#define BUREAUCRAT_DOT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string new_name, int new_grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();
	void signForm(const AForm& Form) const;
	void executeForm(AForm const &form);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	const std::string	name;
	int					grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif