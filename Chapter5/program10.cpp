#include<iostream>
using namespace std;
int main()
{
    int minNumber,maxNumber;
    cout << "I will display a table of numbers and "<< "their squares.\n"<< "Enter the starting number: ";
    cin >> minNumber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;
    cout << "Number Number Squared\n" <<  "-------------------------\n";
    for (int num =minNumber;num<=maxNumber;num++)
    {
        cout << num << "\t\t"<< (num*num) << endl;
       
    }
    return 0;
}