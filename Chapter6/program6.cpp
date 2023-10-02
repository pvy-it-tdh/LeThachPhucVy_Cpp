#include <iostream>
using namespace std;
void displayValue(int);
int main()
{
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);
    cout << "Now I am back in main.\n";
    return 0;
}
void displayValue(int num)
{
    cout << "The value is " << num << endl;s
}