#include <iostream>
using namespace std;

int main() {
    // Declare variables for month, day, and two-digit year
    int month, day, year;

    // Ask the user to enter the month, day, and two-digit year
    cout << "Enter the month (numeric form): ";
    cin >> month;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the two-digit year: ";
    cin >> year;

    // Check if the date is magic
    if (month * day == year) {
        cout << "The date is magic!" << endl;
    } else {
        cout << "The date is not magic." << endl;
    }

    return 0;
}