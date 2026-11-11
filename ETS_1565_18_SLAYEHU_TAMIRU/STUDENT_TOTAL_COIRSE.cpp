

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaring variables to store marks and calculate the total
    double assay, mid, final, total, X, Y, Z;

    cout << "This program helps you calculate your total mark out of 100% and lets you know your status: Pass or Fail." << endl;

    // Getting marks from the student
    cout << "How many did you get in your assignment out of 100%? ";
    cin >> assay;

    cout << "How many did you get in your midterm exam out of 100%? ";
    cin >> mid;

    cout << "How many did you get in your final exam out of 100%? ";
    cin >> final;

    // Calculating the weighted marks
    X = assay * 20 / 100;
    Y = mid * 30 / 100;
    Z = final * 50 / 100;

    // Adding all weighted marks to get the final total
    total = X + Y + Z;

    // Displaying the total with one decimal place
    cout << fixed << setprecision(1);

    // Checking pass or fail using the conditional operator
    cout << (total >= 50 ?
    "Congratulations, you are passed. You got " :
    "Sorry, you are failed. You got ") << total << endl;

    return 0;
}
