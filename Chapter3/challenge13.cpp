#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Constants for conversion rates
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Variables to store the dollar amount and the converted amounts
    double dollars, yen, euros;

    // Ask the user to enter the dollar amount
    cout << "Enter the dollar amount: $";
    cin >> dollars;

    // Convert dollars to yen and euros
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    // Display the converted amounts with two decimal places
    cout << fixed << setprecision(2);
    cout << "Amount in Japanese Yen: " << yen << " Yen" << endl;
    cout << "Amount in Euros: " << euros << " Euros" << endl;

    return 0;
}