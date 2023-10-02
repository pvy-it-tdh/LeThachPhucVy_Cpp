#include<iostream>
using namespace std;
int main()
{
    float calo=3.6;
    float tong;
    for (int i=1;i<=30;i++)
    {
        tong=calo*i;
        if(i%5==0)
        {
            cout << tong << " ";
        }
    }
    return 0;
}