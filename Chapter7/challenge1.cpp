#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    int min =arr[0];
    int max=arr[0];
    for (int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
         if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout << min << endl;
    cout << max << endl;
}