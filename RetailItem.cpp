#include "RetailItem.h"
RetailItem::RetailItem()
{
	description = "No Description";
	unitsOnHand = 0;
	price = 0.0;
}
void RetailItem::setDescription(string aDescription)
{
	description = aDescription;
}
void RetailItem::setUnitsOnHand(int uOH)
{
	if (uOH < 0)
		unitsOnHand = 0;
	else
		unitsOnHand = uOH;
}
void RetailItem::setPrice(double aPrice)
{
	if (aPrice < 0)
		price = 0;
	else
		price = aPrice;
}
void RetailItem::setAll(string aDescription, int uOH, double aPrice)
{
	setDescription(aDescription);
	setUnitsOnHand(uOH);
	setPrice(aPrice);

}
string RetailItem::getDescription() const
{
	return description;
}

int RetailItem::getUnitsOnHand() const
{
	return unitsOnHand;
}

double RetailItem::getPrice() const
{
	return price;
}

void RetailItem::displayData() const
{
	cout << setw(20) << getDescription() << setw(20) << getUnitsOnHand() << setw(20) << getPrice();
}
