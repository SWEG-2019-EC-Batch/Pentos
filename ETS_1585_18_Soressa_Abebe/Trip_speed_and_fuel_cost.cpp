#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variable and data type
    double distance, fuelRatePer100Km, pricePerLiter, totalHours, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    // prompt and getting input from the user
    cout << "Enter trip distance (km): ";
    cin >> distance;
    cout << "Enter travel time hours and minutes: ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelRatePer100Km;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    // Calculate total hours (handling real division for minutes)
    totalHours = hours + (minutes / 60.0);

    // Calculate speed, fuel used, and cost
    averageSpeed = distance / totalHours;
    fuelUsed = (distance / 100.0) * fuelRatePer100Km;
    fuelCost = fuelUsed * pricePerLiter;

    // Print the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each with two decimals.
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used    : " << fuelUsed << " liters" << endl;
    cout << "Fuel cost    : " << fuelCost << " birr" << endl;

    return 0;
}