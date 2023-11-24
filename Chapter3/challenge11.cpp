#include <iostream>
using namespace std;
int main() {
    // Declare variables to store monthly costs
    double loanPayment, insurance, gas, oil, tires, maintenance;

    // Ask the user to enter monthly costs for each expense
    cout << "Enter the monthly cost for the loan payment: $";
    cin >> loanPayment;

    cout << "Enter the monthly cost for insurance: $";
    cin >> insurance;

    cout << "Enter the monthly cost for gas: $";
    cin >> gas;

    cout << "Enter the monthly cost for oil: $";
    cin >> oil;

    cout << "Enter the monthly cost for tires: $";
    cin >> tires;

    cout << "Enter the monthly cost for maintenance: $";
    cin >> maintenance;

    // Calculate the total monthly cost
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;

    // Calculate the total annual cost (12 months)
    double totalAnnualCost = totalMonthlyCost * 12.0;

    // Display the total monthly and total annual costs
    cout << "\nTotal Monthly Cost: $" << totalMonthlyCost << endl;
    cout << "Total Annual Cost: $" << totalAnnualCost << endl;

    return 0;
}