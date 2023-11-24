#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    // Constants for tax rates
    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.02;
    const double TOTAL_TAX_RATE = 0.06;

    // Variables for user input
    string month;
    int year;
    double totalCollected;

    // Ask for user input
    cout << "Enter the month: ";
    getline(cin, month);  // Read the month as a string
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected: $";
    cin >> totalCollected;

    // Calculate product sales
    double productSales = totalCollected / (1 + TOTAL_TAX_RATE);

    // Calculate sales tax amounts
    double stateSalesTax = productSales * STATE_TAX_RATE;
    double countySalesTax = productSales * COUNTY_TAX_RATE;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // Display the report
    cout << "\nMonth: " << month << endl;
    cout << "---------------------" << endl;
    cout << "Total Collected: $" << fixed << setprecision(2) << totalCollected << endl;
    cout << "Sales: $" << productSales << endl;
    cout << "County Sales Tax: $" << countySalesTax << endl;
    cout << "State Sales Tax: $" << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}