#include "Worker.h"
#include <iostream>
#include <bits/stdc++.h>
#include "users_input.h"
using namespace std;

int test(){
	Worker w1 = Worker("Patryk", "Zdziech");
	Worker w2 = Worker("Jakub", "Siwek");
	Worker w3 = Worker("Julia", "Kwiatkowska");

	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||\nAdding Permisions:\n";
	w1.addPermision(cashier);
	w1.addResponsibility(cash_withdraw);
	w1.addResponsibility(transfer); //casier nie może przeprowadzac przelewow
	cout<<w1;
	w1.addPermision(account_manager);
	w1.addResponsibility(transfer);
	cout<<w1;
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||\nRemoving permisions Permisions:\n";
	w1.removePermision(account_manager);
	cout<<w1;
}

int main(int argc, char **argv) {
	return 0;
}
