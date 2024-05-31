#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle {
public:
    //Constructors
    Bicycle();
    Bicycle(const std::string& type);
    Bicycle(const Bicycle& other);

    std::string getType() const override;

    void start() override;
};
