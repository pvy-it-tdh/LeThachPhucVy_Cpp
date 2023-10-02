#include<iostream>
using namespace std;
void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}
int main()
{
    cout << "Hello from main.\n";
    displayMessage();
    cout << "Back in function main again.\n";
    return 0;
}
