#pragma once
#ifndef INTERN_DOT_HPP
#define Intern_DOT_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	// Form* ShrubberyCreation(const std::string& target) const;
	// Form* RobotomyRequest(const std::string& target) const;
	// Form* PresidentialPardon(const std::string& target) const;
	// AForm arr[3];
	// std::string name_form[3];
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
	~Intern();
	AForm* makeForm(std::string form_name, std::string target_name);
};


#endif