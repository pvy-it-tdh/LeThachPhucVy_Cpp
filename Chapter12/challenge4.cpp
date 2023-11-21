#include<iostream>
using namespace std;
int main()
{
    int phithanhvien=2500,nam=6;
    for (int i=1;i<=nam;i++)
    {
        phithanhvien*=1.06;
        cout << "phi thanh vien nam " << i << " la "<< phithanhvien << endl;
    }
    return 0;

}