#include "Bicycle.h"

Bicycle::Bicycle() : Vehicle("Bicycle") {}

Bicycle::Bicycle(const std::string& type) : Vehicle(type) {}

Bicycle::Bicycle(const Bicycle& other) : Vehicle(other) {}

//Bicycle::~Bicycle() {
//    std::cout << "Destroying Bicycle" << std::endl;
//}

void Bicycle::start() {
    std::cout << "Starting Bicycle" << std::endl;
}
