#include <iostream>
using namespace std;

int main() {
    // Declare variables for weight, height, and BMI
    double weight, height, bmi;

    // Ask the user to enter weight in pounds
    cout << "Enter weight (in pounds): ";
    cin >> weight;

    // Ask the user to enter height in inches
    cout << "Enter height (in inches): ";
    cin >> height;

    // Calculate BMI using the formula
    bmi = (weight * 703) / (height * height);

    // Display the calculated BMI
    cout << "BMI: " << bmi << endl;
    if (bmi < 18.5)
    {
        cout << "The person's BMI is underweight.\n";
    }
    else if (bmi > 25)
    {
        cout << "The person's BMI is overweight.\n";
    }
    else if (bmi > 18.5 && bmi < 25)
    {
        cout << "The person's BMI is optimal.\n";
    }
    return 0;
}