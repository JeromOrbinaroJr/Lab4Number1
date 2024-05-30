#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle {
public:
    Bicycle();
    Bicycle(const std::string& type);
    Bicycle(const Bicycle& other);
    //~Bicycle();

    void start() override;
};
