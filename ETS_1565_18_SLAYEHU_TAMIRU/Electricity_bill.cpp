
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declaring variables
    int units;
    double energyCharge, serviceFee, total;

    // Introducing the program
    cout << "This program helps you calculate the total electricity bill used in a month." << endl;

    // Getting the electricity units from the user
    cout << "Enter the total electricity units you used in a month: ";
    cin >> units;

    // Calculating the energy charge using the conditional operator
    energyCharge = (units <= 50) ? (units * 1.5) :
                   (50 * 1.5 + (units - 50) * 2.0);

    // Adding the fixed service fee
    serviceFee = 10;

    // Calculating the total electricity bill
    total = energyCharge + serviceFee;

    // Displaying the results with two decimal places
    cout << fixed << setprecision(2);

    cout << "Energy charge is: " << energyCharge << " Birr" << endl;
    cout << "Service fee is: " << serviceFee << " Birr" << endl;
    cout << "Total bill is: " << total << " Birr" << endl;

    return 0;
}
