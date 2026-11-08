#include <iostream>
#include<iomanip>
using namespace std;
int main() {
   
    
    int electricity_unit;
    double energy_charge, total_bill;
    const int service_charge= 10;

    cout<<"*************ELECTRICITY BILL CALCULATOR*************\n";

    cout<<"Enter the electricity units(kWh)\n";
    cin>> electricity_unit;

    energy_charge= (electricity_unit<=50 
                    ? electricity_unit*1.5 : 50*1.5+(electricity_unit-50)*2);

    
    total_bill= energy_charge + service_charge;
   
    cout<<"The energy charge is: "<< fixed<< setprecision(2)<< energy_charge <<" birr\n";
    cout<<"The service charge is: "<< fixed<< setprecision(2)<< service_charge <<" birr\n";
    cout<<"The total bill is: "<< fixed<< setprecision(2)<< total_bill <<" birr\n";


    return 0;
}
