#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;
    const double SERVICE_CHARGE = 10.00;
    double energy=(units<=50)?units*1.50:50*1.50+(units-50)*2.00;
    double total = energy + SERVICE_CHARGE;
    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}
