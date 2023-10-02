#include<iostream>
using namespace std;
int main()
{
    const int SIZE=12;
    double mua[SIZE];
    for (int i =0 ;i<12;i++)
    {
        cout << "Nhap luong mua cua thang "<< i+1 ;
        cin >> mua[i]; 
        cout << endl;
        while (mua[i]<0)
        {
            cin >> mua[i];
        }
    }
    double tong=0;
    double max=mua[0];
    double min=mua[0];
    int index1=0;
    int index2=0;
    for (int i=0;i<12;i++)
    {
        tong+=mua[i];
        if (mua[i]>max)
        {
            max=mua[i];
            int index1=i;
        }
         if (mua[i]<min)
        {
            min=mua[i];
            index2=i;
        }
    }
    cout << "Tong luong mua cua nam la "<< tong<<endl;
    cout << " Thang co luong mua cao nhat trong nam la "<< index1+1 << endl;
    cout << " Thang co luong mua cao nhat trong nam la "<< index2+1 << endl;
    return 0;

}