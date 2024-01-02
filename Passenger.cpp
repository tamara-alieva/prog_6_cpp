#include "Passenger.h"
#include "Checking.h"
#include <iostream>
#include <string>
using namespace std;

Passenger::Passenger() : Person(0) {
	this->payment_method = 0;
}
Passenger::Passenger(string name) : Person(name, 0) {
	this->payment_method = 0;
}
Passenger::Passenger(int balance) : Person(balance) {
	this->payment_method = 0;
}
Passenger::Passenger(string name, int balance, bool method) : Person(name, balance) {
	this->payment_method = method;
}
void Passenger::setMethod(bool method) {
	this->payment_method = method;
}
bool Passenger::getMethod() {
	return this->payment_method;
}
void Passenger::input() {
	string temp; bool flag;
	Person::input();
	cout << "** Passenger data entry **" << endl;
	do {
		cout << "Payment method (0 - Cash, 1 - Credit card): ";
		cin >> temp;
		flag = Checking::boolCheck(temp);
		if (!flag) cout << "Please try again.. ";
	} while (!flag);
	this->payment_method = stoi(temp);
	cout << "The data are entered successfully!" << endl << endl;
}
void Passenger::takePayment(int payment) {
	int old_balance = this->getBalance();
	this->setBalance(old_balance - payment);
}

Passenger& Passenger::operator=(Person& person) {
	this->name = person.getName();
	this->balance = person.getBalance();
	return *this;
}

ostream& Passenger::operator << (ostream& os) {
	if (!((this->name).empty())) {
		string buffer = "Passenger data:\n- Name: " + this->name + "\n- Balance: " + to_string(this->balance) + "\n- Payment method: ";
		if (this->getMethod())
			buffer += "Credit card\n\n";
		else
			buffer += "Cash\n\n";
		return os << buffer;
	}
	else
		throw string{"The Passenger name is missing!"};
}