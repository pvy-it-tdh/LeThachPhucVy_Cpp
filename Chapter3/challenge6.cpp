#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Constants for the amounts of ingredients in the recipe
    const double SUGAR_PER_COOKIE = 1.5 / 48.0;
    const double BUTTER_PER_COOKIE = 1.0 / 48.0;
    const double FLOUR_PER_COOKIE = 2.75 / 48.0;

    // Variables to store the number of cookies to be made
    int numCookies;

    // Ask the user how many cookies they want to make
    cout << "Enter the number of cookies you want to make: ";
    cin >> numCookies;

    // Calculate the amounts of each ingredient needed for the specified number of cookies
    double sugarNeeded = numCookies * SUGAR_PER_COOKIE;
    double butterNeeded = numCookies * BUTTER_PER_COOKIE;
    double flourNeeded = numCookies * FLOUR_PER_COOKIE;

    // Display the amounts of each ingredient needed with two decimal places
    cout << "For " << numCookies << " cookies, you will need:" << endl;
    cout << fixed << setprecision(2);
    cout << "Sugar: " << sugarNeeded << " cups" << endl;
    cout << "Butter: " << butterNeeded << " cups" << endl;
    cout << "Flour: " << flourNeeded << " cups" << endl;

    return 0;
}