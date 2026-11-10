#include <iostream>  // For input and output
#include <iomanip>   // For controlling decimal precision

int main() {

    // Declaring variables to store assignment, midterm, final,
    // weighted marks, and the final course result
    double assignment, midterm, final, result, r1, r2, r3;

    std::cout << "Enter your assignment mark: ";//input
    std::cin >> assignment; 

    r1 = assignment * 0.2;// Calculating 20% of the assignment mark

     std::cout << "Enter your midterm mark: ";//input
      std::cin >> midterm;  

    r2 = midterm * 0.3;// Calculating 30% of the midterm mark

    std::cout << "Enter your final mark: ";//input
    std::cin >> final; 
    r3 = final * 0.5;// Calculating 50% of the final exam mark

    result = r1 + r2 + r3;// Adding all weighted marks to calculate course total
    
    std::cout << std::fixed << std::setprecision(1);// Setting output to display one decimal place
    std::cout << "Total: " << result << std::endl;//output
    result >= 50 ? std::cout << "Pass" : std::cout << "Fail";// output

    return 0;  // Ending the program successfully
}
// notice: i use "std::cout" for all since it is adivceable for future muscle memory and to practice and know where and when should i use.
