#include "Vehicle.h"

Vehicle::Vehicle() : m_type("Generic Vehicle") {}

Vehicle::Vehicle(const std::string& type) : m_type(type) {}

Vehicle::Vehicle(const Vehicle& other) : m_type(other.m_type) {}

Vehicle::~Vehicle() {
    std::cout << "Destroying " << m_type << std::endl;
}

void Vehicle::start() {
    std::cout << "Starting " << m_type << std::endl;
}

std::string Vehicle::getType() const {
    return m_type;
}
