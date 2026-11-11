#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;
    const double SERVICE_CHARGE = 10.00;
    double energy=(units<=50)?units*1.50:50*1.50+(units-50)*2.00;
    double total = energy + SERVICE_CHARGE;


    return 0;
}
