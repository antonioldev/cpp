#pragma once
#ifndef AFORM_DOT_HPP
#define AFORM_DOT_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#define RST "\033[0m"    /* Reset to default color */
#define BOLD "\033[1m"   /* Bold */
#define U "\033[4m"   /* Underline */
#define R "\033[1;31m" /* Red */
#define G "\033[1;32m"   /* Green */
#define Y "\033[1;33m"   /* Yellow */
#define B "\033[1;34m"   /* Blue */
#define M "\033[1;35m"   /* Magenta */
#define C "\033[1;36m"   /* Cyan */
#define W "\033[1;37m"   /* White */

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	const std::string target;
	bool isSigned;
	const int levelSign;
	const int levelExec;

public:
	AForm();
	AForm(const std::string new_name, const std::string new_target, int newLevelSign, int newLevelExec);
	virtual ~AForm();
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	std::string getName() const;
	int getLevelSign() const;
	int getLevelExec() const;
	std::string getTarget() const;
	bool isItSigned() const;
	void beSigned(const Bureaucrat& Bureaucrat);
	virtual void execute(Bureaucrat const& executor) const = 0;
	static AForm* makeForm(std::string form_name, std::string target_name);
	

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

	class AFormAlreadySignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class AFormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);


#endif