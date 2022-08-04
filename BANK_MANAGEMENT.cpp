#include <iostream>
using namespace std;

void ShowMenu()
{
	cout << "1.CHECK BALANCE\n2.DEPOSIT\n3.WITHDRAW\n4.EXIT\nINPUT HERE::";
	cout << "___________________________________";
}

int main()
{
	ShowMenu();
	int userc;
	double balance = 500; // initial balance
	double useramt;
	do
	{
		cout << "Enter choice::";
		cin >> userc;
		switch (userc)
		{
		case 1:
			cout << "Balance is " << balance << " INR" << endl;
			break;
		case 2:
			cout << "Enter amount to deposit::";
			cin >> useramt;
			balance += useramt;
			cout << "Current balance::" << balance << " INR" << endl;
			break;
		case 3:
			cout << "Enter amount to withdraw::";
			cin >> useramt;
			if (useramt > balance)
			{
				cout << "Balance Unavailable!" << endl;
				cout << "Your balance is " << balance << " INR" << endl;
			}
			else if (balance - useramt < 100)
			{
				cout << "Please enter lower amount!" << endl;
				cout << "Remaining balance must be greater than or equals to 100INR" << endl;
			}
			else
			{
				balance -= useramt;
				cout << useramt << " INR withdrawn" << endl;
				cout << "Available balance::" << balance << " INR" << endl;
			}
			break;
		}
	} while (userc != 4);
	cout << "Thank You For Visiting";
	return 0;
}