/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes_we_can <yes_we_can@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:47:34 by yes_we_can        #+#    #+#             */
/*   Updated: 2025/06/30 16:47:34 by yes_we_can       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &i) : AForm(i), _target(i._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const { return _target; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &i) {
	_target = i._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &i) const {
	if (i.getGrade() > this->getGradeToExec())
	{
		std::cout << "ERROR: " << i.getName() << std::endl;
		std::cout << "ShrubberyCreationForm error: " << std::endl;
		throw AForm::GradeTooLowException();
	}
	else if (!this->getIsSigned())
	{
		std::cout << "ERROR: " << i.getName() << "not signed" << std::endl;
		throw AForm::formNotSigned();
	}
	std::cout << "Bureaucrat " << i.getName() << " executed form " << this->getName() << std::endl;

	std::fstream src_file;
	src_file.open((this->_target + "_shrubbery.txt").c_str(), std::fstream::out);

	if (!src_file)
	{
		std::cout << "ERROR : couldn't create file" << std::endl;
		throw AForm::errorFile();
	}

	const char *ascii_tree_art =
		"              _{\\ _{\\{\\/}/}/}__                \n"
		"             {/{/\\}{/{/\\}(\\}{/{\\} _                \n"
		"            {/{/\\}{/{/\\}(_){/{/\\}  _                \n"
		"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}                \n"
		"       _{\\{/{/{\\{/{/(_)/}/}/}{\\( /}/}/}                \n"
		"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}                \n"
		"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}                \n"
		"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}                \n"
		"        {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)                \n"
		"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)                \n"
		"            {/{/{\\{\\/}{/{\\{\\{(_)/}                \n"
		"             {/{\\{\\{\\/}/}{\\{\\\\}/}                \n"
		"              {){/ {\\/}{\\/} \\}\\}                \n"
		"                   \\.-'.-/                \n"
		"          __...--- |'-.-'| --...__..,,,__               \n"
		"  _...--\"   ...   |'-.-'|  '.' -.  ...,,-_-.._                \n"
		" -    ' .  . '.'   |.'-._| '.'  . .  '.'  ,,..,,...    _                \n"
		" .  '-  '    .--'  | '-.'|    .  '  . ''...,,,..____   _                \n"
		"          ' ..     |'-_.-|                ....._.._.._.._...\n"
		"  .  '  .       _.-|-._ -|-._  .  '  .  ....._.._.._.._...              \n"
		"              .'   |'- .-|   '.        ....._.._.._.._...        \n"
		"  ..-'   ' .  '.   `-._.-`   .'  '  - ......_.._.._.._...                \n"
		"   .-' '        '-._______.-'     '  ......_.._.._..                \n"
		"        .      ~,               ....._ \n"
		"    .       .   |\\   .    ' '-.                \n"
		"    ___________/  \\____________                \n"
		"   /         trust the         \\                \n"
		"  |        vibe you get,        |                \n"
		"  |     energy doesn't lie.     |                \n"
		"   \\___________________________/                \n";

	src_file << ascii_tree_art;
	src_file.close();
}

std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &i) {
	o << "AForm" << i.getName() << " with grade " << i.getGradeToSign() << " & " << i.getGradeToExec() << std::endl;
	return o; 
}
