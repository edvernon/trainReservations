#include "tickets.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person a;
	tickets b;
    string name;
	string cityDest;
	string cityDept;
    int age;
    int ch;
    int t=0;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << ".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    do
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";
        cout << "1.Purchase Tickets\n2.Exit\n";
        cout << "Enter your choice:";
        cin >> ch;
        cout << endl;
        switch(ch)
        {
		case 1: {
			cout << "Enter your name: ";
			cin.ignore();
			getline(cin, name);
			cout << "\nEnter your age: ";
			cin.ignore();
			cin >> age;
			cout << "\nEnter your departing: ";
			cin.ignore();
			cin >> cityDept;
			cout << "\nEnter your destination: ";
			cin.ignore();
			cin >> cityDest;
			// Person(name, age);
			// tickets(cityDest, cityDept);
			// b.tickMenu();
			cout << "Enter choice: ";
			cin.ignore();
			cin >> ch;
		}
		case 2: {
			cout << "Thank you for riding on Eddie's Trains\n";
			system("pause");
			exit(0);
		}
        }
    } while (ch <= 2);
	return 0;
}
