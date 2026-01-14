#include "Item.h"

Item::Item() {
	id = 0;
	name = "";
	serialNumber = "";
	macAddress = "";
	assigned = false;
	storedLocation = "";
	status = "Available";			// may change to enum later
}
Item::Item(std::string Name, std::string Serial, std::string Mac) {
	name = Name;
	serialNumber = Serial;
	macAddress = Mac;
}
void Item::setId(int Id) {
	id = Id;
}
int Item::getId() {
	return id;
}
void Item::setName(std::string Name) {
	name = Name;
}
std::string Item::getName() {
	return name;
}
void Item::setSerialNumber(std::string Serial) {
	serialNumber = Serial;
}
std::string Item::getSerialNumber() {
	return serialNumber;
}
void Item::setMacAddress(std::string Mac) {
	macAddress = Mac;
}
std::string Item::getMacAddress() {
	return macAddress;
}
void Item::setAssigned(bool Assigned) {
	assigned = Assigned;
}
bool Item::isAssigned() {
	return assigned;
}
void Item::setStoredLocation(std::string Location) {
	storedLocation = Location;
}
std::string Item::getStoredLocation() {
	return storedLocation;
}
void Item::setStatus(std::string Status) {
	status = Status;
}
std::string Item::getStatus() {
	return status;
}
void Item::displayItemInfo() {
	std::cout << "Item ID: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Serial Number: " << serialNumber << std::endl;
	std::cout << "MAC Address: " << macAddress << std::endl;
	std::cout << "Assigned: " << (assigned ? "Yes" : "No") << std::endl;
	std::cout << "Stored Location: " << storedLocation << std::endl;
	std::cout << "Status: " << status << std::endl;
}