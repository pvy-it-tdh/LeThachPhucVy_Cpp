// This program determine the number which is the smaller and which is the larger.
#include <iostream>
using namespace std;

int main()
{
    float num1,num2;    // To hold the numbers

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // display the numbers which larger or smaller
    if (num1 > num2)
    {
        cout << "The number: " << num1 << " is larger\n";
        cout << "The number: " << num2 << " is smaller\n";
    }
    else if (num1 < num2)
    {
        cout << "The number: " << num2 << " is smaller\n";
         cout << "The number: " << num1 << " is larger\n";
    }
    else
    {
        cout << "these numbers are equal";
    }
    return 0;
}