// THis program will predict the size of a population of organisms.
#include <iostream>
using namespace std;

int main()
{
    int startingPopulation,      
        numDays;        
    double  dayIncrease;

    cout << "Enter the starting number of organisms: ";
    cin >> startingPopulation ;
    while (startingPopulation  < 2)
    {
        cout << "The number of organisms must be greater than 2\n";
        cout << "please enter again the number of organisms: ";
        cin >> startingPopulation ;
    }
    
    cout << "Enter the number of days the organisms will multiply: ";
    cin >> numDays;
    while (numDays < 1)
    {
        cout << "The number of days must be greater than 1\n";
        cout << "Pleas enter again the number of days: ";
        cin >> numDays;
    }
    
    cout << "Enter the number of population the organisms will multiply: ";
    cin >> dayIncrease;
    while (dayIncrease < 0)
    {
        cout << "The number of days the organisms must be greater than 0\n";
        cout << "Please enter again the number of day the organisms will multiply: ";
        cin >> dayIncrease;
    }

    cout << "day" << "\t" << "the size of population" << endl;
    for (int day = 1; day <= numDays; day++)
    {
        cout << day << "\t" << startingPopulation << endl;
        startingPopulation += startingPopulation + startingPopulation * (dayIncrease / 100); 
    }
    return 0;
}