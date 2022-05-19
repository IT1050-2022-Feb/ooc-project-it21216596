//MLB_02.02_05_VehicleRentalSystem
//IT21216596
//class Reservation
#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;
class Reservation
{
 private:
 int rID;
 char pickupDate[10];
 char pickupTime[8];
 char pickupLocation[30];
 char vehicle[15];
 int rentalDuration;
 int noofPassengers;
 User* u[5];

 public:
 Reservation()
 {
 rID = 0;
 strcpy(pickupDate, "");
 strcpy(pickupTime," ");
 strcpy(pickupLocation, "");
 strcpy(vehicle, "");
 rentalDuration = 0;
 noofPassengers = 0;
 };
 void makeReservation(int rID, const char pDate[10], const char pTime[8], const char
pLocation[30], const char vName[15], int rDuration, int Passengers);
 void cancelReservation();
 ~Reservation()
 {
 cout << "Reservation " << rID << " deleted "<<endl;
 };
};