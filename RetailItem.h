#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class RetailItem
{
public:
	RetailItem();
	void setDescription(string);
	void setUnitsOnHand(int);
	void setPrice(double);
	void setAll(string, int, double);
	string getDescription() const;
	int getUnitsOnHand() const;
	double getPrice() const;
	void displayData() const;
private:
	string description;
	int unitsOnHand;
	double price;

};