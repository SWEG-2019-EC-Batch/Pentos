#include <iostream>
using namespace std;

int main()
{
    float fare, weight, rate, charge;
    float discount, discount_amount, final_fare;
    int age, choice;
    char student;

    
    cout << "Select your destination:\n";
    cout << "1. Dire Dawa - 1000 ETB\n";
    cout << "2. Mekele - 1400 ETB\n";
    cout << "3. Wolkite - 300 ETB\n";
    cout << "4. Hawassa - 600 ETB\n";
    cout << "5. Jimma - 700 ETB\n";
    cin >> choice;


    if (choice == 1)
        fare = 1000;
    else if (choice == 2)
        fare = 1400;
    else if (choice == 3)
        fare = 300;
    else if (choice == 4)
        fare = 600;
    else if (choice == 5)
        fare = 700;
    else {
        cout << "Invalid destination!";
        return 1;
    }

    
    cout << "Enter luggage weight in KG: ";
    cin >> weight;

    cout << "Enter extra weight rate per KG: ";
    cin >> rate;

    cout << "Is the passenger a student? (Y/N): ";
    cin >> student;

    cout << "Enter passenger age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age!";
        return 1;
    }


    if (weight >= 20)
        charge = weight * rate;
    else
        charge = 0;

    
    if (student == 'Y' || student == 'y') {
        if (age <= 12)
            discount = 0.65;
        else if (age >= 60)
            discount = 0.40;
        else
            discount = 0.15;
    }
    else {
        if (age <= 12)
            discount = 0.50;
        else if (age >= 60)
            discount = 0.25;
        else
            discount = 0;
    }


    discount_amount = fare * discount;
    final_fare = fare - discount_amount + charge;


    cout << "\n----- PAYMENT DETAILS -----\n";
    cout << "Original fare: " << fare << " ETB\n";
    cout << "Discount: " << discount_amount << " ETB\n";
    cout << "Fare after discount: "
         << fare - discount_amount << " ETB\n";
    cout << "Extra luggage charge: " << charge << " ETB\n";
    cout << "Total amount to pay: " << final_fare << " ETB\n";

    return 0;
}
