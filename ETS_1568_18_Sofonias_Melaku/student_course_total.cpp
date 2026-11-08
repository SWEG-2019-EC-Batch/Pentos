#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {

    double assignment, mid, finl, total;
    string status;

    cout<<"***************STUDENT COURSE TOTAL***************\n";
    
    cout<< "What are the values of assingment mid exam and final exam respectively?(each out of hundered)\n";
    cin>> assignment;
    cin>> mid;
    cin>> finl;

    total= (assignment*0.2)+(mid*0.3)+(finl*0.5);
    cout<< "The total result is:\n" <<total << fixed << setprecision(1)<<"/100\n";

    cout<< (total>=50 ? "PASS":"FAIL");
    return 0;
}
