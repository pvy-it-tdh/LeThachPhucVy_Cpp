#include <iostream>
using namespace std;

int main() {
    // Constants for coin values in cents
    const int PENNY_VALUE = 1;
    const int NICKEL_VALUE = 5;
    const int DIME_VALUE = 10;
    const int QUARTER_VALUE = 25;
    const int DOLLAR_VALUE = 100; // One dollar equals 100 cents

    // Declare variables for the number of each type of coin
    int pennies, nickels, dimes, quarters;

    // Ask the user to enter the number of each type of coin
    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value of the coins entered in cents
    int totalCents = (pennies * PENNY_VALUE) + (nickels * NICKEL_VALUE) +
                     (dimes * DIME_VALUE) + (quarters * QUARTER_VALUE);

    // Check if the total value equals one dollar
    if (totalCents == DOLLAR_VALUE) 
    {
        cout << "Congratulations! You won the game. You made exactly one dollar!" << endl;
    } 
    else if (totalCents < DOLLAR_VALUE) 
    {
        cout << "Sorry, you entered less than one dollar." << endl;
    } 
    else 
    {
        cout << "Sorry, you entered more than one dollar." << endl;
    }

    return 0;
}