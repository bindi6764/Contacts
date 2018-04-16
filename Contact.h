/*******
**
** Author: Gary, Richard
** Assignment : Project 00
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/

#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
#include <string>
#include <regex>

class Contact {
private:
	std::string first_name_;
	std::string last_name_;
	std::string email_;

public:
	Contact();
	Contact(std::string fname, std::string lname, std::string email);
	std::string first_name();
	std::string last_name();
	std::string email();
	void cout_first_name();
	void cout_last_name();
	void cout_email();
	void cout_full_name();
	void set_first_name(std::string first_name_);
	void set_last_name(std::string last_name_);
	void set_email(std::string email_);
};

#endif /* CONTACT_H_ */
