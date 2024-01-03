#define _CRT_SECURE_NO_WARNINGS
#include "../Fuel.h"
#include "../Car.h"
#include "../Driver.h"
#include "../Passenger.h"
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "TESTS:" << endl << endl;
    /*
    
    cout << "## Calling base (Person) class's overloaded method (with calling Person::input() method)" << endl;
    Passenger passenger1{ "Ivan" };
    passenger1.input();

    cout << "## Calling base (Person) class's overloaded method (without calling Person::input() method)" << endl;
    Driver driver{};
    driver.input();

    cout << "## Calling base (Person) class's constructor" << endl;
    Passenger passenger2{ "Georgiy", 5000, true };
    passenger2 << cout;

    cout << "## Overloaded operator= for Derived classes" << endl;
    Person person{ "Kirill", 7000 };
    Passenger passenger3{};
    passenger3 = person;
    passenger3 << cout;
    
    cout << "## Virtual and non-virtual functions" << endl << endl;

    cout << "# Calling virtual function for dynamic object" << endl;
    Person* pers1{ &person };
    Driver driver1{};
    pers1 = &driver1;
    pers1->input();

    cout << "# Calling non-virtual function for dynamic object" << endl;
    Passenger pass3{"Nikolay", 7000, true};
    pers1 = &pass3;
    pers1->output();

    cout << endl << "# Calling virtual function from non-virtual" << endl;
    pers1 = &driver1;
    pers1->test_virtual();

    cout << endl << "# Calling non-virtual function from non-virtual" << endl;
    pers1 = &pass3;
    pers1->test_non_virtual();

    */

    cout << endl << "## Abstract class Engine -> class Car" << endl;
    Car car{ "Volvo", true };
    cout << "Pure virtual method getBrand: " << car.getBrand() << endl;

    return 0;
}