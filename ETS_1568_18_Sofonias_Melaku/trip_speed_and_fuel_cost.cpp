#include <iostream>
#include<iomanip>
using namespace std;
int main() {
   
    
    int trvl_time, trvl_time_min;
    double distance, fuel_usage, price, avg_speed, fuel_used, fuel_cost;
    
    cout<<"***********TRIP SPEED AND FUEL COST CALCULATOR***********\n";

    cout<<"What is the total distance of the trip in kilometer?\n";
    cin>> distance;

    cout<<"What is the total travel time of the trip in hour and minute respectively?\n";
    cin>> trvl_time;
    cin>> trvl_time_min;

    cout<<"What is the car's fuel usage in liters per 100km?\n";
    cin>> fuel_usage;

    cout<<"What is the price of fuel per liter in birr?\n";
    cin>> price;

    avg_speed= distance/(trvl_time+(trvl_time_min/60.0));
    fuel_used= distance*(fuel_usage/100);
    fuel_cost= fuel_used*price;
   
   cout<<"The average speed of the trip is: " << fixed<< setprecision(2)<< avg_speed<<"km/hr\n";

   cout<<"The total fuel used during the trip is: " << fixed<< setprecision(2)<< fuel_used<<"liters\n";

   cout<<"The total fuel cost during the trip is: " << fixed<< setprecision(2)<< fuel_cost<<"birr\n";
   

    return 0;
}
