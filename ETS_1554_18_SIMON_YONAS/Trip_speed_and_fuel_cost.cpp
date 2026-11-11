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

    return 0;
}
