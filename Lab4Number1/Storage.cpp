#include "Storage.h"

//constructors
Storage::Storage() : m_filename("output.txt") {}

Storage::Storage(const std::string& filename): m_filename(filename) {}

//void storage::addobject(const vehicle& vehicle) {
//	vehicles.push_back(vehicle);
//}
//
//void storage::deleteobject(int index) {
//	if (index >= 0 && index < vehicles.size()) {
//		vehicles.erase(vehicles.begin() + index);
//	}
//}
//
//void storage::savetofile() const {
//	std::ofstream file(m_filename);
//	if (file.is_open()) {
//		for (size_t i = 0; i < vehicles.size(); ++i) {
//			file << "type: " << vehicles[i].gettype() << std::endl;
//		}
//		file.close();
//	}
//	else {
//		std::cerr << "error opening the file for writing." << std::endl;
//	}
//}

void Storage::addObject(std::shared_ptr<Vehicle> vehicle) {
    vehicles.push_back(vehicle);
}

void Storage::deleteObject(int index) {
    if (index >= 0 && index < vehicles.size()) {
        vehicles.erase(vehicles.begin() + index);
    }
}

void Storage::saveToFile() const {
    std::ofstream file(m_filename);
    if (file.is_open()) {
        for (const std::shared_ptr<Vehicle>& vehicle : vehicles) {
            file << "Type: " << vehicle->getType() << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Error opening the file for writing." << std::endl;
    }
}


