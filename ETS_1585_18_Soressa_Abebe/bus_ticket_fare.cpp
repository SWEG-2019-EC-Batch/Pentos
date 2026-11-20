#include <iostream>
#include <string>
using namespace std;

int main() {
    const float WEIGHT_LIMIT = 20.0f;
    float base_fare, bag_weight, rate;
    float extra_charge, discount_rate, discount_amount;
    float discounted_fare, total_fare;
    short int age;
    int route_choice;
    char isstud;
    string destination;

    cout << "Starting point: Addis Ababa\n";
    cout << "Choose your destination:\n";
    cout << "1. Bahir Dar (950 ETB)\n";
    cout << "2. Hawassa (550 ETB)\n";
    cout << "3. Adama (250 ETB)\n";
    cout << "4. Jimma (750 ETB)\n";
    cout << "5. Mekelle (1400 ETB)\n";
    cout << "Enter route choice (1-5): ";
    cin >> route_choice;

    switch (route_choice) {
        case 1:
            destination = "Bahir Dar";
            base_fare = 950.0f;
            break;
        case 2:
            destination = "Hawassa";
            base_fare = 550.0f;
            break;
        case 3:
            destination = "Adama";
            base_fare = 250.0f;
            break;
        case 4:
            destination = "Jimma";
            base_fare = 750.0f;
            break;
        case 5:
            destination = "Mekelle";
            base_fare = 1400.0f;
            break;
        default:
            cout << "Invalid route choice. Please select between 1 and 5.\n";
            return 1;
    }

    cout << "Enter bag weight (KG): ";
    cin >> bag_weight;
    if (bag_weight < 0.0f) {
        cout << "Invalid baggage weight.\n";
        return 1;
    }

    cout << "Enter extra weight rate (ETB/KG): ";
    cin >> rate;
    if (rate < 0.0f) {
        cout << "Invalid rate.\n";
        return 1;
    }

    cout << "Is the customer a student (Y/N)? ";
    cin >> isstud;

    cout << "Enter the age of the customer: ";
    cin >> age;
    if (age <= 0) {
        cout << "Invalid age.\n";
        return 1;
    }

    if (bag_weight > WEIGHT_LIMIT) {
        extra_charge = (bag_weight - WEIGHT_LIMIT) * rate;
    } else {
        extra_charge = 0.0f;
    }

    if (isstud == 'Y' || isstud == 'y') {
        if (age <= 12) {
            discount_rate = 0.65f;
        } else if (age >= 60) {
            discount_rate = 0.40f;
        } else {
            discount_rate = 0.15f;
        }
    } else {
        if (age <= 12) {
            discount_rate = 0.50f;
        } else if (age >= 60) {
            discount_rate = 0.25f;
        } else {
            discount_rate = 0.0f;
        }
    }

    discount_amount = base_fare * discount_rate;
    discounted_fare = base_fare - discount_amount;
    total_fare = discounted_fare + extra_charge;

    cout << "\n--- Ticket Summary ---\n";
    cout << "Route: Addis Ababa -> " << destination << "\n";
    cout << "Base fare: " << base_fare << " birr\n";
    cout << "Discount: " << discount_amount << " birr\n";
    cout << "Discounted fare: " << discounted_fare << " birr\n";
    cout << "Extra baggage charge: " << extra_charge << " birr\n";
    cout << "Total fare: " << total_fare << " birr\n";

    return 0;
}