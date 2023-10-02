#include<iostream>
using namespace std;
int main()
{
    int num=4;
    cout << num << endl; // ->4
    cout << num++ << endl; //->4 num =4+1
    cout << num << endl;// -> 5
    cout << ++num << endl; //num=5+1 ->6
    cout << endl;
    cout << num << endl; //6
    cout << num-- << endl; //->6 num=6-1
    cout << num << endl;// 5
    cout << --num << endl; //num=5-1 -> 4
    return 0;
}