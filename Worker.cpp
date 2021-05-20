#include "Worker.h"

namespace std {

set<int> Worker::availableNumbers;

Worker::Worker(string name, string surname):Human(name, surname) {
	this->setEmployeeNumber();
	this->setStationNumber(0);
};

Worker::~Worker() {
};

int Worker::getEmployeeNumber() const {
	return this->employeeNumber;
};

void Worker::setEmployeeNumber(int employeeNumber) {
	this->employeeNumber = employeeNumber;
};

int Worker::getStationNumber() const {
	return this->stationNumber;
};

void Worker::setStationNumber(int stationNumber) {
	this->stationNumber = stationNumber;
};

const set<permision>& Worker::getPermisionsGranted() const {
	return permissions;
}

void Worker::addPermision(permision permisionGranted) {
	this->permissions.insert(permisionGranted);
	//std::cout<<this->permissions.empty();
}
void Worker::removePermision(permision permisionToRemove) {
	this->permissions.erase(permisionToRemove);
	set<responsibility> responsibilitiesToRemove;
	for (auto r : this->getResponsibilities())
		if (!(this->canHaveResposibility(r)))
			responsibilitiesToRemove.insert(r);
	for (auto r : responsibilitiesToRemove)
		this->removeResposibility(r);
}
void Worker::clearPermisions() {
	this->permissions.clear();
}

bool Worker::addResponsibility(responsibility responsibilityAdded) {
	if (this->canHaveResposibility(responsibilityAdded)){
		this->responsibilities.insert(responsibilityAdded);
		return true;
	}
	return false;
}

void Worker::removeResposibility(responsibility responsibilityToRemove) {
	this->responsibilities.erase(responsibilityToRemove);
}

bool Worker::canHaveResposibility(const responsibility resp) {
	for (auto p : this->permissions){
		if (possibleResponsibilities[p].count(resp))
			return true;
	}
	return false;
}

ostream& operator <<(ostream &os, const Worker &worker) {
	os<<"name:"<<worker.getName()<<" "<<worker.getSurname()<<endl;
	os<<"Employee number:"<<worker.getEmployeeNumber()<<endl;
	os<<"Permisions:";
	for (auto p : worker.getPermisionsGranted()){
		os<<EnumToStr(p)<<" ";
	}
	os<<"\nResponsibilities:";
	for (auto r : worker.getResponsibilities()){
		os<<EnumToStr(r)<<" ";
	}
	os<<"\n\n";
	return os;
}
bool operator<(const Worker& l, const Worker& r)
    {
        return l.getEmployeeNumber()< r.getEmployeeNumber();
    }

void Worker::setEmployeeNumber() {
	if (Worker::availableNumbers.empty())
		Worker::availableNumbers.insert(1);
	this->employeeNumber = *(Worker::availableNumbers).begin();
	if (Worker::availableNumbers.size()==1)
		Worker::availableNumbers.insert(this->employeeNumber+1);
	Worker::availableNumbers.erase(this->employeeNumber);
}

const set<responsibility>& Worker::getResponsibilities() const {
	return responsibilities;
}

void Worker::clearResponsiblities() {
	this->responsibilities.clear();
}

} /* namespace std */
