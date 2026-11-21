#include<iostream>
using namespace std;

int main()
{
 float base_fare, bag_weight, rate, total_fare, extra_charge, discount, total_discount;
 short int age, destination;
 char isstud;

 // Base fare is already defined for better understanding of the program
  cout<< "Please choose your destination(1-5)\n";
  cout<< "1. Addis Ababa to Dire Dawa(1000 ETB)\n";
  cout<< "2. Addis Ababa to Mekele(1400 ETB)\n";
  cout<< "3. Addis Ababa to Wolkite(300 ETB)\n";
  cout<< "4. Addis Ababa to Hawassa(600 ETB)\n";
  cout<< "5. Addis Ababa to Jimma(700 ETB)\n";
  cin>> destination;

  switch (destination){
  case 1:
  base_fare=1000;
  break;
  case 2:
  base_fare=1400;
  break;
  case 3:
  base_fare=300;
  break;
  case 4:
  base_fare=600;
  break;
  case 5:
  base_fare=700;
  break;
  default:
  cout<< "Invalid destination\n";
  return 1;
  }

  cout<< "Please input the bag weight in KG\n";
  cin>> bag_weight;
  cout<< "Please input the rate for extra weight in ETB/KG\n";
  cin>> rate;
 
 cout<< "Is the customer a student(Y/N)\n";
 cin>> isstud;
 cout<<"Please enter the age of the customer in positive value\n";
 cin>> age;
   
 
  extra_charge=0;
  
  if (bag_weight>=20){  
 extra_charge=rate*bag_weight; 
 }
 
      
 // To apply discount based on occupation and age
  
  if (isstud=='Y'){
   if(age<=0){
    cout<< "invalid age";
    return 1;
    }
   
   else if (age<=12 ){
    discount=0.65;
    }
   else if (age>=60){
    discount=0.40;
    }
   else{
    discount=0.15;
    }
   }
  else{
     if (age<=12 && age>0){
    discount= 0.5;
    }
   else if (age>=60){
    discount=0.25;
    }
   else{
    discount=0;
    }
   }
   
  total_discount=base_fare*discount; 
  base_fare=base_fare-total_discount; 

  total_fare= base_fare + extra_charge;
 
 cout<< "Base fare:  "<< base_fare<<"birr\n";
 cout<< "Extra charge:  "<< extra_charge <<"birr\n";
 cout<< "Total discount:  "<< total_discount <<"birr\n";
 cout<< "Total fair:  "<< total_fare<<"birr\n";
 return 0;
}