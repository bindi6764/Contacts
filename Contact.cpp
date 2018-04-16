/*******
**
** Author: Gary, Richard
** Assignment : Project 00
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/

#include <iostream>
#include <string>
#include <regex>
#include "Contact.h"

const std::regex kValidName("[a-zA-Z]{2,}");
const std::regex kValidEmail ("(\\w+)@(\\w+)(\\.(\\w+))+");

Contact::Contact() {
	first_name_ = "Jane";
	last_name_ = "Doe";
	email_ = "jane_doe@unknown.com";
}

Contact::Contact(std::string fname, std::string lname, std::string email) {
	set_first_name(fname);
	set_last_name(lname);
	set_email(email);
}

std::string Contact::first_name() {
	return first_name_;
}

std::string Contact::last_name() {
	return last_name_;
}

std::string Contact::email() {
	return email_;
}

void Contact::set_first_name(std::string fname) {
	if (std::regex_match(fname, kValidName)) {
		first_name_ = fname;
	} else {
		first_name_ = "-invalid-";
	}
}

void Contact::set_last_name(std::string lname) {
	if (std::regex_match(lname, kValidName)) {
		last_name_ = lname;
	} else {
		last_name_ = "-invalid-";
	}
}

void Contact::set_email(std::string email) {
	if (std::regex_match(email, kValidEmail)) {
		email_ = email;
	} else {
		email_ = "invalid email provided";
	}
}

void Contact::cout_first_name() {
	std::cout << first_name_ << std::endl;
}

void Contact::cout_last_name() {
	std::cout << last_name_ << std::endl;
}

void Contact::cout_email() {
	std::cout << email_ << std::endl;
}

void Contact::cout_full_name() {
	std::cout << first_name_ + " " + last_name_ << std::endl;
}
