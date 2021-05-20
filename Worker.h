#ifndef WORKER_H_
#define WORKER_H_

#include "Human.h"
#include "permision.h"
#include <set>

namespace std {

class Worker: public Human {

static set<int> availableNumbers;

int employeeNumber,stationNumber;
set <permision> permissions;
set <responsibility> responsibilities;

public:
	Worker(string name, string surname);
	virtual ~Worker();
	int getEmployeeNumber() const;
	void setEmployeeNumber(int empoyeeNumber);
	void setEmployeeNumber();
	int getStationNumber() const;
	void setStationNumber(int stationNumber);
	const set<permision>& getPermisionsGranted() const;
	void addPermision(permision permisionGranted);
	void removePermision(permision permisionToRemove);
	void clearPermisions();
	bool canHaveResposibility(const responsibility resp);
	bool addResponsibility(responsibility responsibilityAdded);
	void removeResposibility(responsibility responsibilityToRemove);
	void clearResponsiblities();
	const set<responsibility>& getResponsibilities() const;
};
bool operator<(const Worker& l, const Worker& r);
ostream& operator<<(ostream& os, const Worker &worker);
}
#endif /* WORKER_H_ */

//	Worker(const Worker &other);
