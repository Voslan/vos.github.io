#include <iostream>
using namespace std;

int multiply(int x, int y)
{
	return x*y;
}


int divide(int x, int y)
{
	return x/y;
}

int add(int x, int y)
{
	return x+y;
}

int subtract(int x, int y)
{
	return x - y;
}


int main()
{
	char op = 'c';
	int x, y;
	while (op != 'e')
	{
		cout << "What operation would you like to perform: add(+), subtract(-), divide(/), multiply(*), [e]xit ? \n";
		cin >> op;
		switch (op)
		{
		case '+':
			cout << "Enter x: "; 
			cin >> x;
			cout << "Enter y: ";
			cin >> y;
			cout << x << " + " << y << " = " << add(x, y) << endl;
			break;
		case '-':
			cout << "Enter x: ";
			cin >> x;
			cout << "Enter y: ";
			cin >> y;
			cout << x << " - " << y << " = " << subtract(x, y) << endl;
			break;
		case '/':
			cout << "Enter x: ";
			cin >> x;
			cout << "Enter y: ";
			cin >> y;
			cout << x << " / " << y << " = " << divide(x, y) << endl;
			break;
		case '*':
			cout << "Enter x: ";
			cin >> x;
			cout << "Enter y: ";
			cin >> y;
			cout << x << " * " << y << " = " << multiply(x, y) << endl;
			break;
		case 'e':
			break;
		default:
			cout << "Sorry, try again" << endl;
		}
	}
	return 0;
}