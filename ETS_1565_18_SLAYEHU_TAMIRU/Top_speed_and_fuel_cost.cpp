
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declaring variables
    double distance, fuelUse, fuelPrice;
    double timeHours, totalTime, averageSpeed;
    double fuelUsed, fuelCost;

    int hours, minutes;

    // Introducing the program
    cout << "This program helps you calculate the average speed, fuel used and fuel cost of a trip." << endl;

    // Getting trip information from the user
    cout << "Enter the distance of the trip in km: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter additional travel time in minutes: ";
    cin >> minutes;

    cout << "Enter fuel use in liters per 100 km: ";
    cin >> fuelUse;

    cout << "Enter fuel price per liter in Birr: ";
    cin >> fuelPrice;

    // Converting hours and minutes into total hours
    totalTime = hours + (minutes / 60.0);

    // Calculating average speed
    averageSpeed = distance / totalTime;

    // Calculating total fuel used
    fuelUsed = (distance * fuelUse) / 100;

    // Calculating total fuel cost
    fuelCost = fuelUsed * fuelPrice;

    // Displaying results with two decimal places
    cout << fixed << setprecision(2);

    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " Birr" << endl;

    return 0;
}
