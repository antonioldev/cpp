
#pragma once
#ifndef ROBOTOMY_REQUEST_FORM_DOT_HPP
#define ROBOTOMY_REQUEST_FORM_DOT_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const& executor) const;
};

#endif