#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Declare constants for ticket prices
    const double CLASS_A = 15.0;
    const double CLASS_B = 12.0;
    const double CLASS_C = 9.0;
    // the number of tickets sold for each class
    int numClass_A, numClass_B, numClass_C;
    // enter the number of tickets sold for each class
    cout << "Enter the number of Class A tickets sold: ";
    cin >> numClass_A;
    cout << "Enter the number of Class B tickets sold: ";
    cin >> numClass_B;
    cout << "Enter the number of Class C tickets sold: ";
    cin >> numClass_C;
    // Calculate money collected from ticket sales
    double totalSales = (numClass_A * CLASS_A) +
                        (numClass_B * CLASS_B) +
                        (numClass_C * CLASS_C);
    // the result 
    cout << fixed << setprecision(2);
    cout << "Total ticket sales: $" << totalSales << endl;
    return 0;
}