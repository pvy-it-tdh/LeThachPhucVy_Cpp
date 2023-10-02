#include<iostream>
using namespace std;
int main()
{
    cout <<" Chuyen doi tu do C sang do F\n";
    cout << "---------------------------------\n";
    for (int i =0;i<=20;i++)
    {
        double F=(double)(i*9/5)+32;
        cout << i <<"do C sang do F la "<< F<< endl;
    }
    return 0;   
}