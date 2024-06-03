#include "Storage.h"
#include <iostream>
#include <memory>

int main() {
    Storage storage;
    try {
        std::shared_ptr<Vehicle> car = std::make_shared<Car>();
        std::shared_ptr<Vehicle> bicycle = std::make_shared<Bicycle>();
        car->start();
        storage.addObject(car);

        bicycle->start();
        storage.addObject(bicycle);

        storage.deleteObject(1);

        storage.saveToFile();
    }
    catch (const std::exception& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
