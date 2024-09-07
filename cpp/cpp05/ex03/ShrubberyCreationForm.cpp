#include "ShrubberyCreationForm.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: AForm("ShrubberyCreationForm", target, 145, 137)
{
	// std::cout << "ShrubberyCreationForm Created\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other) {}
	return *this;
}

/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm Destroyed\n";
}

/*******************************************************************/
/*                             EXECUTE                             */
/*******************************************************************/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->isItSigned() == false)
	{
		std::cout << R << executor.getName();
		throw AFormNotSignedException();
	}
	if (this->getLevelExec() >= executor.getGrade())
	{
		// this->getTarget()
		std::string file_name = this->getTarget() + "_shrubbery";
		std::ofstream file(file_name.c_str());

   		if (!file)
		{
			std::cerr << "Error creating file" << std::endl;
			return;
    	}
		file << "        -          " << std::endl;
		file << "       /~\\        " << std::endl;
		file << "      /  ~\\       " << std::endl;
		file << "     / ~   \\      " << std::endl;
		file << "    /~    ~ \\     " << std::endl;
		file << "   /      ~  \\    " << std::endl;
		file << "  /   ~     ~ \\   " << std::endl;
		file << " /_____________\\  " << std::endl;
		file << "       ||          " << std::endl;
		file << "       ||          " << std::endl;
    	file.close();
		std::cout << G << file_name << " created\n";
	}
	else
	{
		std::cout << R << executor.getName();
		throw GradeTooLowException();
	}
}

AForm* ShrubberyCreationForm::makeForm(AForm *form, std::string form_name, std::string target_name)
{
	if (form == NULL && form_name == "shrubbery creation")
		return (new ShrubberyCreationForm(target_name));
	return (form);
}