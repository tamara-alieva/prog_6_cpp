#pragma once
#include <string>

class Person {
protected:
	std::string name;
	int balance;
public:
	Person();
	Person(std::string name);
	Person(int balance);
	Person(std::string name, int balance);
	void setName(std::string name);
	void setBalance(int balance);
	std::string getName() const ;
	int getBalance();
	virtual void input();
	std::ostream& operator << (std::ostream& os);
};