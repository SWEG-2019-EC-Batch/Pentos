#include <iostream> 
#include <iomanip>  // For controlling decimal precision
int main() {

    int unit;
    double energy_charge, service_charge = 10.00, total_bill;// Declaring variables to store electricity units,

    std::cout << "Enter electricity units (kWh): "; // Input
    std::cin >> unit; 

    
        energy_charge = (unit <= 50)// If units are 50 or less, each unit costs 1.50 birr
            ? unit * 1.50
            : 75 + (unit - 50) * 2.00; // Otherwise, the first 50 units cost 1.50 and remaining units cost 2.00

   
    total_bill = energy_charge + service_charge; // to calculate the total electricity bill

    std::cout << std::fixed << std::setprecision(2);

    
    (unit < 0)
        ? std::cout << "Invalid units\n" // If units are negative, display an invalid message
        : (std::cout << "Energy charge: " << energy_charge << " birr\n"// Otherwise, display the electricity bill details
           << "Service charge: " << service_charge << " birr\n"
           << "Total bill: " << total_bill << " birr\n");

    return 0; 
}


