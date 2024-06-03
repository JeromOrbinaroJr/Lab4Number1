#pragma once
#include "Vehicle.h"
#include "Bicycle.h"
#include "Car.h"
#include <fstream>
#include <vector>
#include <string>
#include <memory>

class Storage
{
public:
	//Constructors
	Storage();
	Storage(const std::string& filename);
	~Storage() = default;

	void addObject(std::shared_ptr<Vehicle> vehicle);
	void deleteObject(int index);
	void saveToFile() const;
private:
	std::vector<std::shared_ptr<Vehicle>> vehicles;
	std::string m_filename;
};