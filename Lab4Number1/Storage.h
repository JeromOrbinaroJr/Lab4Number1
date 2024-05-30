#pragma once
#include "Vehicle.h"
#include <fstream>
#include <vector>
#include <string>
#include <memory>

class Storage
{
public:
	Storage(const std::string& filename);
	~Storage();

	void addObject(const Vehicle& vehicle);
	void deleteObject(int index);
	void saveToFile() const;
private:
	std::vector<Vehicle> vehicles;
	std::string m_filename;
};