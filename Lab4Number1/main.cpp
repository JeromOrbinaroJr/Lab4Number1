#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"
#include "Storage.h"

int main() {
    Storage storage("output.txt");
    Vehicle transport;
    Car car;
    Bicycle bicycle;

    Vehicle* mainTransport = &transport;
    mainTransport->start();
    storage.addObject(transport);

    mainTransport = &car;
    mainTransport->start();
    storage.addObject(car);

    mainTransport = &bicycle;
    mainTransport->start();
    storage.addObject(bicycle);

    storage.saveToFile();

    return 0;
}
