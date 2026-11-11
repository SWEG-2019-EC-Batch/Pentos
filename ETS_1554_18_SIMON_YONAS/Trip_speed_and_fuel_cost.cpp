#include <iostream>
using namespace std;

int main() {
    double distance, fuelPer100, pricePerLiter;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time (hours minutes): ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;
    double totalHours = hours + minutes / 60.0;   // 60.0 keeps the decimal part
    double speed      = distance / totalHours;
    double fuelUsed   = distance * fuelPer100 / 100.0;
    double fuelCost   = fuelUsed * pricePerLiter;


    return 0;
}
