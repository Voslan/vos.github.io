#include <iostream>
using namespace std;
int totalFizz = 0, totalBuzz = 0, totalFizzBuzz = 0;
string a[20] = {};
void printTotal() {
	int c; 
	cout << "Want to know the total number of (1)fizz or (2)buzz or both (3)fizzbuzz (enter 0 to quit)? ";
	for (int i = 0; i < 20; i++)
	{
		if (a[i] == "fizz") {
			totalFizz++;

		}
		if (a[i] == "buzz")
		{
			totalBuzz++;

		}
		if (a[i] == "fizzbuzz") {
			totalFizzBuzz++;

		}
	}
	do
	{
		cin >> c;
		switch (c)
		{
		case 1:
			cout << "Total Fizz: " << totalFizz << endl;
			break;
		case 2:
			cout << "Total Buzz: " << totalBuzz << endl;
			break;
		case 3: 
			cout << "Total FizzBuzz: " << totalFizzBuzz << endl;
			break;
		default:
			cout << "Invalid number! enter number from 1-3" << endl;
			break;
		}
	} while (c != 0);
}

int main()
{
	int count = 1; 
	for (int i = 1; i <= 20; i++) {
		if (i % 3 == 0) {
			a[i-1] = "fizz";
			cout << count << "- fizz \n";
		}
		else if (i % 5 == 0) {
			a[i-1] = "buzz";
			cout << count << "- buzz \n";
		}
		else {
			a[i-1] = "fizzbuzz";
			cout << count << "- fizzbuzz \n";
		}
		count++; 
	}
	cout << endl; 
	printTotal();
	system("pause"); 
	return 0;
}