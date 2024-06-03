#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    //Constructors
    Car();
    explicit Car(const std::string& type);
    explicit Car(const Car& other);
    
    std::string getType() const override;
    void start() override;
};