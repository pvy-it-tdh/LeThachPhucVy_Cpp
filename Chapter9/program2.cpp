#include<iostream>
using namespace std;
int main()
{
    int x=25;
    int *ptr=nullptr;
    ptr=&x;
    cout << "The value in x is "<< x << endl;
    cout << "The address of x is "<< ptr << endl;
    return 0;
}