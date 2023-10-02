#include <iostream>
using namespace std;

int main() {
    // Constants for seconds per minute, hour, and day
    const int SECONDS_PER_MINUTE = 60;
    const int SECONDS_PER_HOUR = 3600;
    const int SECONDS_PER_DAY = 86400;

    // Declare variables for seconds, minutes, hours, and days
    int seconds, minutes, hours, days;

    // Ask the user to enter a number of seconds
    cout << "Enter a number of seconds: ";
    cin >> seconds;

    // Calculate the number of minutes, hours, and days
    minutes = seconds / SECONDS_PER_MINUTE;
    hours = seconds / SECONDS_PER_HOUR;
    days = seconds / SECONDS_PER_DAY;

    // Display the results
    if (days >= 1) 
    {
        cout << "Equivalent days: " << days << endl;
    }
    if (hours >= 1) 
    {
        cout << "Equivalent hours: " << hours << endl;
    }
    if (minutes >= 1) 
    {
        cout << "Equivalent minutes: " << minutes << endl;
    }

    return 0;
}