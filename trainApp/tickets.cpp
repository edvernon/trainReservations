#include "tickets.h"
#include "Person.h"

using namespace std;

tickets::tickets() 
{
	numberTicket = 0;
	destCity = " ";
}

tickets::tickets(string cityDest,string cityDep) : Person(name, age)
{
	numberTicket = 0;
	Person a = Person(name, age);
	destCity = cityDest;
	deptCity = cityDep;
	reservation();
}

void tickets::reservation()
{
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		
		cout << "Enter number of tickets : ";
		cin.ignore();
		cin >> numberTicket;
		setPrice(numberTicket);
		getNumberTickets();
		setPrice(price);
		getPrice();
		cin.ignore();
		cin >> choice;
		break;
	case 2:
		cancellation();
		break;
	case 3:
		display();
	default:
		cout << "Invalid choice.";
		cin >> choice;
	}
}

void tickets::cancellation()
{

}

void tickets::display()
{

}










/*
//Begin ticket menu here
void tickets::tickMenu()
{
	
	int ch;


	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "......TICKET MENU..........\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	do
	{
		cout << "^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";
		cout << "1.Purchase Tickets\n2.Exit\n";
		cout << "Enter your choice:";
		cin >> ch;
		cout << endl;
		switch (ch)
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
			Person(name, age);
			tickets(cityDest, cityDept);
			b.tickMenu();
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
	} while (ch <= 6);
	//End ticket menu here

	*/






}

void tickets::setSeatNum(int)
{
	
}

int tickets::getSeatNum()
{
	return seatNum;
}

void tickets::setDepCity(string cityDep)
{
	deptCity = cityDep;
}

string tickets::getDepCity()
{
	return deptCity;
}

void tickets::setDestCity(string cityDest)
{
	destCity = cityDest;
}

string tickets::getDestCity()
{
	return destCity;
}

void tickets::setTrainNum(int trainNumber)
{
	if (trainNumber == 1)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 2)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 3)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 4)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 5)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 6)
	{
		trainNum = trainNumber;
	}
	else if (trainNumber == 7)
	{
		trainNum = trainNumber;
	}


}

int tickets::getTrainNum()
{
	return trainNum;
}

void tickets::setPrice(int age)
{
	if (age >= 65){
		double price = 20.00;
	}
	else if (age < 65 && age > 10)
	{
		double price = 60.00;
	}
	else
	{
		double price = 15.00;
	}
	double total = price * getNumberTickets();
}

double tickets::getPrice()
{
	return total;
}

void tickets::setNumberTickets(int t)
{
	if (int t = 0)
	{
		t = 1;
	}
	else
		t++;
	numberTicket = t;
}

int tickets::getNumberTickets()
{
	return numberTicket;
}