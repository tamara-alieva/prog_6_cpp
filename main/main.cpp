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
    /*Passenger passenger{ "Ivan" };
    passenger.input();

    Driver driver{};
    driver.input();

    Passenger pass1{ "Georgiy", 5000, true };
    pass1.output();*/

    Person person{ "Kirill", 7000 };
    Passenger pass2{};
    pass2 = person;
    pass2.output();

    return 0;
}