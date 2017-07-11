#include <string>
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double money = 0;
	
	int numPennies = 0;
	int numNickels = 0;
	int numDimes = 0;
	int numQuarters = 0;

	cout << "Loose Change Total!" << endl;
	cout << endl;
	cout << "Enter Number of Pennies" << endl;
	cin >> numPennies;
	cout << "Number of Nickels" << endl;
	cin >> numNickels;
	cout << "Number of Dimes" << endl;
	cin >> numDimes;
	cout << "Number of Quarters" << endl;
	cin >> numQuarters;
	
	/*
	double pennyValue = 0.01;
	double nickelValue = 0.05;
	double dimeValue = 0.10;
	double quarterValue = 0.25;

	money = numPennies * pennyValue + numNickels * nickelValue + numDimes * dimeValue + numQuarters * quarterValue;
	*/

	money = numPennies * 0.01 + numNickels * 0.05 + numDimes * 0.1 + numQuarters * 0.25;

	cout << "Do you have cash as well?" << endl;
	cout << "Yes or No" << endl;
	
	bool userAnswer = false;
	cin >> userAnswer;
	


	cout << endl;
	cout << "Your total is: $" << money << endl;

}