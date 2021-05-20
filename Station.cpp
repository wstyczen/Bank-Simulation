/*
 * Station.cpp
 *
 *  Created on: 11 kwi 2021
 *      Author: patryk
 */

#include "Station.h"

namespace std {

Station::Station(int i) {
	this->StationNumber=i;
}

Station::~Station() {
	// TODO Auto-generated destructor stub
}

Station::Station(const Station &other) {
	this->StationNumber=3;
}

Station& Station::operator=(const Station &other) {
	return operator =(other);
}

int Station::getStationNumber() {
	return this->StationNumber;
}

void Station::setStationNumber(int StationNumber) {
	this->StationNumber = StationNumber;
}
}
