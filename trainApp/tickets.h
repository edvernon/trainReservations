#include "Person.h"
#include <iostream>


using std::string;
using std::iostream;

class tickets : public Person {
private:
    int MAX_SIZE = 10000;
protected:
    double total;
    double price;
    int numberTicket;
    string destCity;
    string deptCity;
    int trainNum;
    int seatNum;

//	pUT VARIABLES FOR MENU HERE!!!



    enum { FlyingScotsman, RajadhaniExpress , OrientExpress , TheGhan , ShatabdiExpress , Amtrak , IndianPacific , Mallard
    } train;


public:
	tickets();

    tickets(string, string);

    void reservation();

    void cancellation();

    void display();

	void tickMenu();

    void setSeatNum(int);

    int getSeatNum();

    void setDepCity(string);

    string getDepCity();

    void setDestCity(string);

    string getDestCity();

    void setTrainNum(int);

    int getTrainNum();

    void setPrice(int);

    double getPrice();

    void setNumberTickets(int);

    int getNumberTickets();
};