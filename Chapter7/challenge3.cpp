#include<iostream>
using namespace std;
int main()
{
    string ten [5]={"nhe","vua","ngot","cay","manh"};
    int soluong[5];
    for(int i=0;i<5;i++)
    {
        cout << "Nhap vao so luong sot " << ten[i] << "da ban duoc ";
        cin >> soluong[i];
    }
    double tong=0;
    double max=soluong[0];
    double min=soluong[0];
    int index1=0;
    int index2=0;
    for (int i=0;i<12;i++)
    {
        tong+=soluong[i];
        if (soluong[i]>max)
        {
            max=soluong[i];
            int index1=i;
        }
         if (soluong[i]<min)
        {
            min=soluong[i];
            index2=i;
        }
    }
    cout << " Tong doanh so la "<< tong << endl;
    cout << "loai sot ban chay nhat la "<< ten[index1];
    cout << "loai sot ban it nhat la "<< ten[index2];
    return 0;
}