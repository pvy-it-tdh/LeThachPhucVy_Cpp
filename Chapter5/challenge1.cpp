#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n<0)
    {
        cin >> n;
    }
    int sum;
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout << sum;
    return 0;
}