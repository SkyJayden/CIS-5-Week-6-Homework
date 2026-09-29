#include <iostream>
#include <string>

// Homework 6 — Jayden MB
// CIS 5 Week 06 · Menu
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	
	//Do While Loop
	int num = 0;
	string user;
	do
	{
			cout << "User: ";
			cin >> user;
			
		cout << "Welcome " << user << "! Type 1, 2 or 3: " << endl;
		cin >> num;
		if (num == 1)
			cout << "Hello " << user << "!" << endl;
		else if (num == 2)
		{
			cout << "Countdown" << endl;
			for (int i = 4; i > 0; --i)
			
				cout << i << endl;
		}
		else if (num == 3)
			break;
		
		
	} while (num < 1 || num > 3);
	return 0;
}
