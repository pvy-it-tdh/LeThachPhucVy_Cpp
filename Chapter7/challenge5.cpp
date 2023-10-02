#include<iostream>
using namespace std;
int main()
{
    int arr[3][5];
    for (int i =0;i<3;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin >> arr[i][j];
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    int sum=0;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
            sum+=arr[i][j];
        }
    }
    double average=sum/15;
    cout << "So pound thuc an it nhat cua tat ca cac loai khi la "<< min << endl ;
    cout << "So pound thuc an nhieu nhat cua tat ca cac loai khi la "<< max << endl;
    cout << "So pound thuc an trung binh la "<< average;
    return 0;
}