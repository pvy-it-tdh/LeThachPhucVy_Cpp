#include<iostream>
using namespace std;
int main()
{
    const int SIZE =7;
    int number[SIZE]={1,2,3,8};
    for (int index=0;index<SIZE;index++)
    {
        cout << number[index]<< " ";
    }
    cout << endl;
    return 0;
}