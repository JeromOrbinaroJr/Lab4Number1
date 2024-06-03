#pragma once
#include "Vehicle.h"

class Bicycle : public Vehicle {
public:
    //Constructors
    Bicycle();
    explicit Bicycle(const std::string& type);
    explicit Bicycle(const Bicycle& other);

    std::string getType() const override;

    void start() override;
};
