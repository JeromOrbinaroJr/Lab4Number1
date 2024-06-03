#pragma once
#include <iostream>
#include <typeinfo>

class Vehicle {
public:
    //Constructors
    Vehicle();
    Vehicle(const std::string& type);
    Vehicle(const Vehicle& other);

    virtual std::string getType() const = 0;
    virtual ~Vehicle();
    virtual void start() = 0; //pure virtual

protected:
    std::string m_type;
};
