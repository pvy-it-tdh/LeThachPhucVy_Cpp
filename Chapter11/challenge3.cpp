#include<iostream>
using namespace std;
int main()
{
    int tang=1;
    for (int i =1;i<=25;i++)
    {
        tang*=i;
        cout << "toc do tang muc nuoc " << i <<" nam tiep theo la " << tang;
    }
    return 0;
}
