#include "Storage.h"

//Constructors 
Storage::Storage() : m_filename("output.txt") {}

Storage::Storage(const std::string& filename): m_filename(filename) {}

void Storage::addObject(std::shared_ptr<Vehicle> vehicle) {
    vehicles.push_back(vehicle);
}

void Storage::deleteObject(int index) {
    if (index < 0 || index >= vehicles.size()) { throw std::runtime_error("Invalid index is specified"); }
    vehicles.erase(vehicles.begin() + index);
}

void Storage::saveToFile() const {
    std::ofstream file(m_filename);
    if (!file.is_open()) { throw std::runtime_error("File " + m_filename + " does not exist or cannot be opened."); }
    for (const std::shared_ptr<Vehicle>& vehicle : vehicles) {
        file << "Type: " << vehicle->getType() << std::endl;
    }
    file.close();
}

