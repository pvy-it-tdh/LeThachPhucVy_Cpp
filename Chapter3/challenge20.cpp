#include<iostream>
using namespace std;
int main()
{
    float dk;
    cout << "Nhap duong kinh cua chiec pizza: ";
    cin >> dk;
    float dt=3.14*(dk*dk)/4;
    int solat=dt/14.125;
    cout << "so lat pizza duoc cat ra la "<< solat;
    return 0;
}