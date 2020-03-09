#include "RetailItem.h"

void printMenu();
void menuOptions(int, RetailItem[], int&);
void addItems(RetailItem[], int&);
void viewItems(int&, RetailItem[]);
void clrscrn();

int main()
{
	int choice, i = 0;
	RetailItem list[50];
	do
	{
		printMenu();
		cin >> choice;
		clrscrn();
		menuOptions(choice, list, i);
	} while (choice != 3);
	return 0;
}
void printMenu()
{
	cout << "Retail menu:\n"
		<< "1.Add item\n"
		<< "2.View all items\n"
		<< "3.Exit\n";
}

void menuOptions(int option, RetailItem list[], int& i)
{
	switch (option)
	{
	case 1:
		addItems(list, i);
		clrscrn();
		break;
	case 2:
		viewItems(i, list);
		break;
	case 3:
		cout << "Goodbye!!!";
		break;

	default:
		cout << "Invalid option\n";
		break;
	}
}

void addItems(RetailItem list[], int& i)
{
	string description;
	double price;
	int iOH;
	bool error;

	cin.ignore();
	cout << "Enter the name of the item:\n";
	getline(cin, description);

	do
	{
		error = 0;
		cout << "Enter the items on hand:\n";
		cin >> iOH;

		if (cin.fail())
		{
			cout << "Invalid input, try again.\n";
			cin.clear();
			cin.ignore(80, '\n');
			error = 1;
		}

	} while (error);



	do
	{
		error = 0;
		cout << "Enter the price:\n";
		cin >> price;

		if (cin.fail())
		{
			cout << "Invalid input, try again.\n";
			cin.clear();
			cin.ignore(80, '\n');
			error = 1;
		}

	} while (error);

	cin.ignore();

	list[i].setAll(description, iOH, price);

	i++;
}

void viewItems(int& i, RetailItem list[])
{
	char cont;
	if (i == 0)
		cout << "No Items added yet.\n\n";
	else
	{
		cout << setw(10) << "Description" << setw(10) << "Units" << setw(10) << "Price\n";
		for (int n = 0; n < i; n++)
		{
			list[n].displayData();
			cout << "\n";
		}
	}
	cout << "Enter any key to continue.\n";
	cin >> cont;

	clrscrn();
}

void clrscrn()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}