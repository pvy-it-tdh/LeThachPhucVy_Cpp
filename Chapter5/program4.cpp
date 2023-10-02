#include<iostream>
using namespace std;
int main()
{
    const double MAX_TEMP=102.5;
    double temperature;
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;
    while(temperature>MAX_TEMP)
    {
        cout <<"The temperature is too high. Turn the\n";
        cout <<"thermostat down and wait 5 minutes.\n";
        cout <<"Then take the Celsius temperature again\n";
        cout <<"and enter it here: ";
        cin >> temperature;
    }
    cout << "The temperature is acceptable.\n";
    cout << "Check it again in 15 minutes.\n";
    return 0;
}