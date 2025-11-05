#include <iostream>
#include <cmath> // For sqrt, pow, log, fabs
using namespace std;

int main() {
    double Num1, Num2;

    // Input
    cout << "Enter first number: ";
    cin >> Num1;
    cout << "Enter second number: ";
    cin >> Num2;

    // Basic operations
    cout << "Addition: " << Num1 + Num2 << endl;
    cout << "Subtraction: " << Num1 - Num2 << endl;
    cout << "Multiplication: " << Num1 * Num2 << endl;
    cout << "Division: " << Num1 / Num2 << endl;
 

    // Square of numbers
    cout << "Square Root of First Number: " << sqrt(Num1) << endl;
    cout << "Square Root of Second Number: " << sqrt(Num2) << endl;    
    // Modulus (absolute value)
    cout << "Modulus of First Number: " << fabs(Num1) << endl;

    // Logarithm of first number
    cout << "Logarithm of First Number: " << log(Num1) << endl;
   
    return 0;
}