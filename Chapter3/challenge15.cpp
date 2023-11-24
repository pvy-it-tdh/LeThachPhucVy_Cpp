#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Constants
    const double ASSESSMENT_PERCENT = 0.60; // 60% assessment value
    const double TAX_RATE = 0.75; // $0.75 for each $100 of assessment value

    // Variables
    double actualValue;

    // Ask the user to enter the actual value of the property
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate the assessment value
    double assessmentValue = actualValue * ASSESSMENT_PERCENT;

    // Calculate the property tax
    double propertyTax = (assessmentValue / 100.0) * TAX_RATE;

    // Display the assessment value and property tax
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << fixed << setprecision(2) << propertyTax << endl;

    return 0;
}