#include <iostream>

using namespace std;

int main()
{
	int cost, sellingPrice;
	double salesTaxRate, salesTax, markUp, markUpRate, finalPrice;

	cout << "Anthony Cantu \t L1-2 \t L1-2.exe" << endl;

	cout << "Enter the original price of the item: ";
	cin >> cost;

	cout << endl; //Line break

	cout << "Enter the marked up percentage: ";
	cin >> markUp;

	cout << endl; //Line break

	cout << "Enter the sales tax rate: ";
	cin >> salesTaxRate;

	cout << endl; //Line break

	sellingPrice = ((markUp / 100) * cost) + cost;
	salesTax = sellingPrice * (salesTaxRate / 100);
	finalPrice = sellingPrice + salesTax;

	cout << "The original price = $" << cost << endl;
	cout << "The price is marked up by " << markUp << "%" << endl;
	cout << "The selling price = $" << sellingPrice << endl;
	cout << "The sales tax rate = " << salesTaxRate << "%" << endl;
	cout << "The sales tax = $" << salesTax << endl;
	cout << "The final price = $" << finalPrice << endl;

	char q;
	cout << "\nPress any key to exit...";
	cin.ignore(2, '\n');
	cin.get(q);
	return 0;
}
