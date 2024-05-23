#pragma once
#include <iostream>

class Vehicle {
public:
    Vehicle();
    Vehicle(const std::string& type);
    Vehicle(const Vehicle& other);
    virtual ~Vehicle();

    virtual void start();

protected:
    std::string m_type;
};