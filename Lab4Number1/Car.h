#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    //Constructors
    Car();
    Car(const std::string& type);
    Car(const Car& other);
    
    std::string getType() const override;
    void start()  override;
};

//virtual table