#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	double a, Sincome;
	cout << "Income per hour: $15.50" << endl;
	cout << "Total number of hours in five weeks:" << endl;
	cin >> a;
	Sincome = a * 15.50;
	cout << setw(10) << setprecision(2) << fixed << "Total income in five weeks (gross) is $ " << Sincome << endl;
	cout << " " << endl;
	
	double Sincomet, b;
	cout << "Total tax to pay is 14% of income" << endl;
	cout << "*input gross amount*" << endl;
	cin >> b;
	Sincomet = b * 0.86;
	cout << setw(10) << setprecision(2) << fixed << "Total income with taxes paid (net) is $ " << Sincomet << endl;
	cout << " " << endl;

	double SincomeC, c;
	cout << "Total amount left after spending on clothes and" << endl;
	cout << "Spent 10% of income" << endl; 
	cout << "*input net income*" << endl;
	cin >> c;
	SincomeC = c * .9;
	cout << setw(10) << setprecision(2) << fixed << "Total income left after spending on clothes and school supplies is $ " << SincomeC << endl;
	cout << " " << endl;

	double SincomeD, d; 
	cout << "Total amount left after spending on school supplies and" << endl;
	cout << "Spent 1% of income" << endl; 
	cout << "*input net income*" << endl;
	cin >> d;
	SincomeD = d * .99;
	cout << setw(10) << setprecision(2) << fixed << "Total income left after spending on clothes and school supplies is $ " << SincomeD << endl;
	cout << " " << endl;

	double SincomeE, e; 
	cout << "Total amount left after spending on saving bonds and" << endl;
	cout << "Spent 25% of income" << endl; 
	cout << "*input net income*" << endl;
	cin >> e;
	SincomeE = e * .75;
	cout << setw(10) << setprecision(2) << fixed << "Total income left after spending on saving bonds is $ " << SincomeE << endl;
	cout << " " << endl;

	double SincomeF, f; 
	cout << "Total amount left after spending on saving bonds for parents and" << endl;
	cout << "Spent 50% of income" << endl; 
	cout << "*input net income*" << endl;
	cin >> f;
	SincomeE = f * .50;
	cout << setw(10) << setprecision(2) << fixed << "Total income left after spending on saving bonds for parents is $ " << SincomeE << endl;
	cout << " " << endl;

	_getch();
	return 0;
}
