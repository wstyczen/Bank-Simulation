/*
 * Human.cpp
 *
 *  Created on: 11 kwi 2021
 *      Author: patryk
 */

#include "Human.h"
#include "users_input.h"
#include <iostream>
namespace std {

Human::Human(string name, string surname) {
	this->setName(name);
	this->setSurname(surname);
}

Human::~Human() {
	// TODO Auto-generated destructor stub
}

Human& Human::operator=(const Human &other) {
	return operator =(other);
}

const string& Human::getName() const {
	return this->name;
}

void Human::setName(string &name) {
	if (!checkWord(name))
		checkWord(name);
	else {
		name =formatToName(name);
		this->name = name;
		;
	}
}

const string& Human::getSurname() const {
	return this->surname;
}

bool Human::setSurname(string &surname) {
	if (!checkWord(surname))
		return false;
	else {
		surname = formatToName(surname);
		this->surname = surname;
		return true;
	}
}

string Human::formatToName(string s) {
	for (unsigned int i = 1; i < s.size(); ++i) {
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	return s;
}

} /* namespace std */
