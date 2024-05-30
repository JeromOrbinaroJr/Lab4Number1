#include "Storage.h"

Storage::Storage(const std::string& filename):
	m_filename(filename) {}

Storage::~Storage() {}

void Storage::addObject(const Vehicle& vehicle) {
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
		for (size_t i = 0; i < vehicles.size(); ++i) {
			file << "Type: " << vehicles[i].getType() << std::endl;
		}
		file.close();
	}
	else {
		std::cerr << "Error opening the file for writing." << std::endl;
	}
}