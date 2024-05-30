#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    Car(const std::string& type);
    Car(const Car& other);
    //~Car();

    void start() override;
};
