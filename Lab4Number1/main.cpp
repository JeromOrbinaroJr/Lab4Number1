#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"
#include "Storage.h"
#include <memory>

int main() {
    Storage storage("output.txt");

    // Создание умных указателей на объекты Car и Bicycle
    std::shared_ptr<Vehicle> car = std::make_shared<Car>();
    std::shared_ptr<Vehicle> bicycle = std::make_shared<Bicycle>();
    car->start();
    storage.addObject(car);

    bicycle->start();
    storage.addObject(bicycle);

    storage.saveToFile();

    return 0;
}
