#pragma once
#include <iostream>

class Item {
private:
	int id;
	std::string name;
	std::string serialNumber;
	std::string macAddress;
	bool assigned;
	std::string storedLocation;
	std::string status;			// may change to enum later

public:
	Item();  // Default constructor
	Item(std::string itemName, std::string itemSerial, std::string itemMac);

	void setId(int itemId);	
	int getId();

	void setName(std::string itemName);
	std::string getName();

	void setSerialNumber(std::string itemSerial);
	std::string getSerialNumber();

	void setMacAddress(std::string itemMac);
	std::string getMacAddress();

	void setAssigned(bool isAssigned);
	bool isAssigned();

	void setStoredLocation(std::string location);
	std::string getStoredLocation();

	void setStatus(std::string itemStatus);
	std::string getStatus();

	void displayItemInfo();
};