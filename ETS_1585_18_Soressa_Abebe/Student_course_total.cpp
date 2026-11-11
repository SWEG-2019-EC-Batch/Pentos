#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variable and Data-type
    double assignment, midterm, finalMark, total;
    const double assignment_weight = 0.20;
    const double midterm_weight = 0.30;
    const double final_weight = 0.50;
    const double pass_mark = 50.0;

    // prompting the user and get input
    cout << "Enter assignment, midterm, and final marks (out of 100): ";
    cin >> assignment >> midterm >> finalMark;

    // Calculate the total score
    total = (assignment * assignment_weight) + 
            (midterm * midterm_weight) + 
            (finalMark * final_weight);

    // Print results and status
    cout << fixed << setprecision(1);
    cout << "Total: " << total << "/100" << endl;
    cout << ((total >= pass_mark) ? "Pass" : "Fail") << endl;

    return 0;
}
