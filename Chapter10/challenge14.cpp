#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    cout << "Payroll Report\n";
    cout << "Enter 0 for employee number to exit.\n\n";

    while (true) {
        cout << "Employee Number: ";
        cin >> employeeNumber;

        if (employeeNumber == 0) {
            break; // Exit the loop when 0 is entered
        }

        cout << "Gross Pay: $";
        cin >> grossPay;

        if (grossPay < 0) {
            cout << "Invalid input. Gross pay cannot be negative.\n";
            continue; // Continue to the next iteration of the loop
        }

        cout << "State Tax: $";
        cin >> stateTax;

        if (stateTax < 0 || stateTax > grossPay) {
            cout << "Invalid input. State tax must be non-negative and less than gross pay.\n";
            continue; // Continue to the next iteration of the loop
        }

        cout << "Federal Tax: $";
        cin >> federalTax;

        if (federalTax < 0 || federalTax > grossPay) {
            cout << "Invalid input. Federal tax must be non-negative and less than gross pay.\n";
            continue; // Continue to the next iteration of the loop
        }

        cout << "FICA Withholdings: $";
        cin >> ficaWithholdings;

        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "Invalid input. FICA withholdings must be non-negative and less than gross pay.\n";
            continue; // Continue to the next iteration of the loop
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Error: Total deductions exceed gross pay. Please reenter the data for this employee.\n";
            continue; // Continue to the next iteration of the loop
        }

        // Calculate net pay and update totals
        double netPay = grossPay - (stateTax + federalTax + ficaWithholdings);

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += netPay;
    }

    // Display the payroll report totals
    cout << "\nPayroll Report Totals:\n";
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Total State Tax: $" << totalStateTax << endl;
    cout << "Total Federal Tax: $" << totalFederalTax << endl;
    cout << "Total FICA Withholdings: $" << totalFicaWithholdings << endl;
    cout << "Total Net Pay: $" << totalNetPay << endl;

    return 0;
}
