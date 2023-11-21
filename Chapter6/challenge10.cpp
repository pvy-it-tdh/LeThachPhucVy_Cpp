#include <iostream>
#include <cmath>
#include <iomanip> // Add this line

using namespace std;

// Function prototype
double futureValue(double presentValue, double monthlyInterestRate, int months);

int main() {
    // Get user input for present value, monthly interest rate, and number of months
    double presentValue, monthlyInterestRate;
    int months;

    cout << "Enter the present value of the account: $";
    cin >> presentValue;

    cout << "Enter the monthly interest rate (as a decimal): ";
    cin >> monthlyInterestRate;

    cout << "Enter the number of months the money will be left in the account: ";
    cin >> months;

    // Calculate and display the future value
    double futureVal = futureValue(presentValue, monthlyInterestRate, months);

    cout << fixed << setprecision(2);
    cout << "The future value of the account after " << months << " months is: $" << futureVal << endl;

    return 0;
}

// Function to calculate future value
double futureValue(double presentValue, double monthlyInterestRate, int months) {
    // Formula: F = P * (1 + i)^t
    double futureVal = presentValue * pow(1 + monthlyInterestRate, months);
    return futureVal;
}
