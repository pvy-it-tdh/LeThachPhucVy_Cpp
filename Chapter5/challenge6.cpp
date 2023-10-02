#include<iostream>
using namespace std;
int main()
{
    float gio,tocdo;
    float khoangcach;
    cin >> gio >> tocdo;
    while (gio<0 || tocdo<0)
    {
        cin >> gio >> tocdo;
    }
    for (int i=1; i<=gio;i++)
    {
        khoangcach=tocdo*i;
        cout << " khooang cach da di duoc sau " << i << "gio la " << khoangcach;
    }
    return 0;
}