#include<iostream>
using namespace std;
int main()
{
    int day,tongtien,luonghangngay=1;
    for (int i=1;i<=day;i++)
    {
        if( i==1)
        {
            luonghangngay=1;
            tongtien+=luonghangngay;
        }
        luonghangngay*=2;
        tongtien+=luonghangngay;
    }
    cout << tongtien;
    return 0;

}