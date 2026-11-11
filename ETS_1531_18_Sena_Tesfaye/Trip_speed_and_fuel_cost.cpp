#include <iostream> // Enable input and output
#include <iomanip>

int main() {

    double distance, fuelConsumptionRate, pricePerLiter; // Declaring variables to store distance, fuel consumption rate, and fuel price
    int hours, minutes; // Declaring variables to store travel time
    double totalHours, averageSpeed, fuelUsed, fuelCost; // Declaring variables to store calculated results

    // Input
    std::cout << "Enter distance of trip (km): ";
    std::cin >> distance;

    std::cout << "Enter travel time (hours and minutes separated by space): ";
    std::cin >> hours >> minutes;

    std::cout << "Enter fuel consumption (liters per 100 km): ";
    std::cin >> fuelConsumptionRate;

    std::cout << "Enter price per liter (birr): ";
    std::cin >> pricePerLiter;

    // Type casting minutes to double for precise floating-point division
    totalHours = hours + (static_cast<double>(minutes) / 60.0);

    // Calculations
    averageSpeed = distance / totalHours;
    fuelUsed = distance * (fuelConsumptionRate / 100.0);
    fuelCost = fuelUsed * pricePerLiter;

    // Output formatted to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Average Speed: " << averageSpeed << " km/h\n";
    std::cout << "Fuel Used: " << fuelUsed << " liters\n";
    std::cout << "Fuel Cost: " << fuelCost << " birr\n";

    return 0; 
}
