#pragma once

#include "Person.h"
#include <string>

class Passenger : public Person{
private:
	bool payment_method;
public:
	Passenger();
	Passenger(std::string name);
	Passenger(int balance);
	Passenger(std::string name, int balance, bool method);
	void setMethod(bool method);
	bool getMethod();
	void input() override;
	void output();
	void takePayment(int payment);
	Passenger& operator=(Person& person);
	std::ostream& operator << (std::ostream& os);
};