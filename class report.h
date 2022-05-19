//MLB_02.02_05_VehicleRentalSystem
//IT21216596
//class report
#include<iostream>
using namespace std;
class Report{
private:
 int reportID;
public:
 Report()
{
 reportID = 0;
};
 Report( int reportID);
 void genaratereport(int reportID);
 ~Report()
 {
 cout << "Report " << reportID<< " deleted " <<endl;
 };
};