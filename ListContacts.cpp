
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
#include "Contact.h"

void ShowContactDetails(Contact contact);

int main() {

	std::cout<< "Contact created with default constructor and no following updates >>>";
	ShowContactDetails(Contact());

	std::cout<< "Contact created with constructor taking initializing data >>>";
	ShowContactDetails(Contact("Bindi", "Patel", "bindi@gmail.com"));

	std::cout<< "Contact created with data that fails member validations >>>";
	ShowContactDetails(Contact("Bindi", "Patel", "bindi@g  mail.com"));



}


void ShowContactDetails(Contact contact) {
	std::cout<<std::endl;
	std::cout<< "First Name: " + contact.first_name() << std::endl;
	std::cout<< "Last Name: " + contact.last_name() << std::endl;
	std::cout<< "Full Name is: ";
	contact.cout_full_name();
	std::cout<< "Email: " + contact.email() << std::endl;
	std::cout<<std::endl;
}
