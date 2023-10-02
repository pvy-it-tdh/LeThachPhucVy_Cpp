#include<iostream>
using namespace std;
void changeMe(int);
int main()
{
    int number=12;
    cout << "number is "<< number << endl;
    changeMe(number);
    cout <<  "Now back in main again, the value of ";
    cout << "number is " << number << endl;
    return 0;
}
void changeMe(int myValue)
{
    myValue=0;
    cout << "Now the value is " << myValue << endl;
}