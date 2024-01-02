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
    Passenger passenger{ "Tom" };
    passenger.input();

    Driver driver{};
    driver.input();
    return 0;
}