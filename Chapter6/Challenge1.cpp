#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    if (wholesaleCost < 0 || markupPercentage < 0) {
        cerr << "Invalid input. Please enter non-negative values." << endl;
        return -1.0; // Indicate an error
    }

    // Calculate retail price
    double retailPrice = wholesaleCost + (wholesaleCost * markupPercentage / 100.0);
    return retailPrice;
}

int main() {
    // Get user input
    double wholesaleCost, markupPercentage;

    cout << "Enter the wholesale cost: $";
    cin >> wholesaleCost;

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    if (retailPrice != -1.0) {
        // Display the result with two decimal places
        cout << fixed << setprecision(2);
        cout << "The retail price is: $" << retailPrice << endl;
    }

    return 0;
}

