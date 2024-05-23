#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"

int main() {
    Vehicle transport;
    Car car;
    Bicycle bicycle;

    Vehicle* mainTransport = &transport;
    mainTransport->start();

    mainTransport = &car;
    mainTransport->start();

    mainTransport = &bicycle;
    mainTransport->start();

    return 0;
}
