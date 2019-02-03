#include <iostream>
using namespace std;

int main() 
{
	const double TAX_RATE = 0.05; //5% sales tax
	char saleType;
	int number;
	double price, total;
	
	cout << "Enter price $";
	cin >> price;
	cout << " Enter Number Purchased: ";
	cin >> number;
	cout << "Type W if this is a wholesale purcahse.\n"
		 << " Typr R if this is a retail purchase.\n"
		 << " Then press Return.\n";
	cin >> saleType;
	
	if ((saleType == 'W') || (saleType =='w'))
	{
		total = price * number;
	}
	else if ((saleType == 'R') || (saleType =='r'))
	{
		double subtotal;
		subtotal = price * number;
		total = subtotal + subtotal * TAX_RATE;
	}
	else
	{
		cout << "Error in input.\n";
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << number << "item at $" << price << endl;
	cout << "Total Bill = $" << total;
	if ((saleType == 'R') || (saleType == 'r'))
		cout << " including sales tax.\n";
	
	return 0;
}
	