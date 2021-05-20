/*
 * Station.h
 *
 *  Created on: 11 kwi 2021
 *      Author: patryk
 */

#ifndef STATION_H_
#define STATION_H_
#include "Client.h"
#include "Worker.h"
namespace std {

class Station {
	int StationNumber;
public:
	Station(int i);
	virtual ~Station();
	Station(const Station &other);
	Station& operator=(const Station &other);

	int getStationNumber();

	void setStationNumber(int StationNumber);
};

} /* namespace std */

#endif /* STATION_H_ */
