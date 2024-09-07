
#pragma once
#ifndef SHRUBBERY_CREATION_FORM_DOT_HPP
#define SHRUBBERY_CREATION_FORM_DOT_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const& executor) const;
	static AForm* makeForm(AForm *form, std::string form_name, std::string target_name);
};

#endif