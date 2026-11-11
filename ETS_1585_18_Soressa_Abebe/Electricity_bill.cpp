#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variable and data type
    int units;
    const double cost_first_50 = 1.50;
    const double cost_above_50 = 2.00;
    const double service_charge = 10.0;
    double energyCharge, totalBill;

    // promting the user and get input
    cout << "Enter electricity units consumed (kWh): ";
    cin >> units;

    // Calculate energy charge 
    energyCharge = (units > 50) ? (50 * cost_first_50 + (units - 50) * cost_above_50) 
                                : (units * cost_first_50);

    // Calculate total bill
    totalBill = energyCharge + service_charge;

    // Print the energy charge, the service charge and the total bill (two decimals). 
    cout << fixed << setprecision(2);
    cout << "Energy charge : " << energyCharge << " birr" << endl;
    cout << "Service charge: " << service_charge << " birr" << endl;
    cout << "Total bill    : " << totalBill << " birr" << endl;

    return 0;
}
