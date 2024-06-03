#pragma once
#include <iostream>
#include <typeinfo>

class Vehicle {
public:
    //Constructors
    Vehicle();
    explicit Vehicle(const std::string& type);
    explicit Vehicle(const Vehicle& other);
    virtual ~Vehicle();

    virtual std::string getType() const = 0;
    virtual void start() = 0; //pure virtual

protected:
    std::string m_type;
};
