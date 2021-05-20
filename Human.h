#ifndef HUMAN_H_
#define HUMAN_H_
#include <iostream>
namespace std {

class Human {
	string name, surname;
public:
	Human(string name, string surname);

	virtual ~Human();

	Human& operator=(const Human &other);

//	Human(const Human &other) {
//		// TODO Auto-generated constructor stub
//	}

	const string& getName() const;

	void setName(string &name);

	const string& getSurname() const;

	bool setSurname(string &surname);

	string formatToName(string s);
};

} /* namespace std */

#endif /* HUMAN_H_ */
