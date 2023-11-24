#include <iostream>
using namespace std;
int main() {
    // Declare variables for Celsius and Fahrenheit temperatures
    double celsius, fahrenheit;

    // Ask the user to enter the Celsius temperature
    cout << "Enter the Celsius temperature: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    // Display the converted Fahrenheit temperature
    cout << "Fahrenheit temperature: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}