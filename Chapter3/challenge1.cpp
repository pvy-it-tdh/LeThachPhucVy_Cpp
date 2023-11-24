#include <iostream>
using namespace std;
int main() 
{
    // the number of gallons of gas and the number of miles
    double Gas;
    double milesWhenFull;
    // enter the number of gallons of gas and the number of miles
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> Gas;
    cout << "Enter the number of miles the car can travel when the tank is full: ";
    cin >> milesWhenFull;
    // Calculate the number of miles per gallon of gas
    double milesPerGas = milesWhenFull / Gas;
    // Display the result
    cout << "The car can travel " << milesPerGas << " miles per gallon of gas." << endl;
    return 0;
}