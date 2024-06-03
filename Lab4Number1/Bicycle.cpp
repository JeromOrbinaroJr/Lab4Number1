#include "Bicycle.h"

//Constructors 
Bicycle::Bicycle() : Vehicle("Bicycle") {}
Bicycle::Bicycle(const std::string& type) : Vehicle(type) {}
Bicycle::Bicycle(const Bicycle& other) : Vehicle(other) {}

std::string Bicycle::getType() const {
    return typeid(*this).name();
}

void Bicycle::start() {
    std::cout << "Starting Bicycle" << std::endl;
}
