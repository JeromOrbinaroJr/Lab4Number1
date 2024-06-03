#include "Vehicle.h"

//Constructors
Vehicle::Vehicle() : m_type("Generic Vehicle") {}
Vehicle::Vehicle(const std::string& type) : m_type(type) {}
Vehicle::Vehicle(const Vehicle& other) : m_type(other.m_type) {}

Vehicle::~Vehicle() {
    std::cout << "Destroying " << m_type << std::endl;
}

