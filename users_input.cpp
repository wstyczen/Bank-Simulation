#include "users_input.h"
#include "permision.h"
#include <iostream>
using std::cout;using std::cin;
using std::string; using std::endl;

void wrongInput() {
	cout << "Please try again" << endl;
	cin.clear();
	cin.ignore(100000, '\n');
}
int getNumberFromUser(){
	int number;
	while (!(std::cin >> number))
		wrongInput();
	cin.ignore(100000, '\n');
	return number;
}

bool checkWord(string str){
	unsigned int strLenght = str.size();
	if (strLenght>50 or strLenght<2)
			return false;
	for (unsigned int i = 1; i < strLenght; ++i) {
		        if (!isalpha(str[i]))
		            return false;
		}
	return true;
}

string getStringFromUser() {
	string userStr;
	while (not (cin >> userStr) or  not checkWord(userStr))
		wrongInput();
	cin.ignore(100000, '\n');
	return userStr;
}


