#include <iostream>
using namespace std;
int main() {
    // Declare variables
    double replacementCost, minimumInsurance;

    // Ask the user to enter the replacement cost of the building
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum amount of insurance (80% of replacement cost)
    minimumInsurance = 0.8 * replacementCost;

    // Display the result
    cout << "You should buy at least $" << minimumInsurance << " in insurance for the property." << endl;

    return 0;
}