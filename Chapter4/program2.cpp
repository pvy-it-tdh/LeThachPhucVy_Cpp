// THis program display the Roman numeral version 
#include <iostream>
using namespace std;

int main()
{   
    int number; // To hold the number enter

    cout << "Enter the number within the range of 1 through 10: ";
    cin >> number;

    // Display the Roman numeral version of the number
    switch (number)
    {
        case 1: cout << "Roman numeral version of " << number << " is I.\n";
        break;
        case 2: cout << "Roman numeral version of " << number << " is II.\n";
        break;
        case 3: cout << "Roman numeral version of " << number << " is III.\n";
        break;
        case 4: cout << "Roman numeral version of " << number << " is IV.\n";
        break;
        case 5: cout << "Roman numeral version of " << number << " is V.\n";
        break;
        case 6: cout << "Roman numeral version of " << number << " is VI.\n";
        break;
        case 7: cout << "Roman numeral version of " << number << " is VII.\n";
        break;
        case 8: cout << "Roman numeral version of " << number << " is VIII.\n";
        break;
        case 9: cout << "Roman numeral version of " << number << " is IX.\n";
        break;
        case 10: cout << "Roman numeral version of " << number << " is X.\n";
        break;
        default: cout << "You enter the number that out of range.\nPlease run program again.";
        break;
    }
    return 0;
}