/*
 * Client.cpp
 *
 *  Created on: 11 kwi 2021
 *      Author: patryk
 */

#include "Client.h"

namespace std {

Client::Client(string name, string surname, string id, int clientNumber):Human(name, surname, id) {
//	this->setName(name);
//	this->setSurname(surname);
//	this->setId(id);
	this->setClientNumber(clientNumber);

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

//Client::Client(const Client &other) {
//	// TODO Auto-generated constructor stub
//
//}

int Client::getClientNumber() const {
	return this->clientNumber;
}

void Client::setClientNumber(int clientNumber) {
	this->clientNumber = clientNumber;
}

Client& Client::operator=(const Client &other) {
	return operator =(other);
}

} /* namespace std */
