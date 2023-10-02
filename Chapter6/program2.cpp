#include<iostream>
using namespace std;
void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}
int main()
{
    cout << "Hello from main.\n";
    for (int count=0;count<5;count++)
        displayMessage();
    cout << "Back in function main again.\n";
    return 0;
}
