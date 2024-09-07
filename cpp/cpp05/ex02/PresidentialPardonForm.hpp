
#pragma once
#ifndef PRESIDENTIAL_PARDON_FORM_DOT_HPP
#define PRESIDENTIAL_PARDON_FORM_DOT_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const& executor) const;
};

#endif