#include<iostream>
using namespace std;
void k(int a[],int k,int n)
{
    for (int i=0;i<k;i++)
    { 
       if (a[i]>n)
        {
            cout << a[i]<< " ";
        }
    }
}
int main()
{
    int a[100];
    int n,b;
    cin >> b>>n;
    for (int i=0;i<b;i++)
    {
        cin >> a[i];
    }
    k(a,b,n);
    return 0;
}