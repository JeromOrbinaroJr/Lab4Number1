#include "Car.h"

//Constructors
Car::Car() : Vehicle("Car") {}
Car::Car(const std::string& type) : Vehicle(type) {}
Car::Car(const Car& other) : Vehicle(other) {}

void Car::start() {
    std::cout << "Starting Car" << std::endl;
}

std::string Car::getType() const {
    return typeid(*this).name();
}

