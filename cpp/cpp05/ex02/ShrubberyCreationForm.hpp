
#pragma once
#ifndef SHRUBBERY_CREATION_FORM_DOT_HPP
#define SHRUBBERY_CREATION_FORM_DOT_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();
};

#endif