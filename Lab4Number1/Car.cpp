#include "Car.h"

Car::Car() : Vehicle("Car") {}

Car::Car(const std::string& type) : Vehicle(type) {}

Car::Car(const Car& other) : Vehicle(other) {}

//Car::~Car() {
//    std::cout << "Destroying Car" << std::endl;
//}

void Car::start() {
    std::cout << "Starting Car" << std::endl;
}
