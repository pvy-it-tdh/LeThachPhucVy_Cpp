#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double Von, Lai, LaiSuat, Tong, s, t;
    int SoLan;
    cout << "Nhap so von goc: $";
    cin >> Von;
    cout << "Lai suat tiet kiem: ";
    cin >> LaiSuat;
    cout << "So lan gop trong 1 nam: ";
    cin >> SoLan;
    t = 1 + ((LaiSuat / 100) / SoLan);
    s = pow(t,SoLan);
    Tong = Von * s;
    Lai = Tong - Von;
    cout << "Lai suat tiet kiem:      " << LaiSuat << "%" << endl;
    cout << "So lan gop trong 1 nam:  " << SoLan << endl;
    cout << "Von ban dau:            $" << Von << endl;
    cout << "Lai:                    $" << Lai << endl;
    cout << "So tien tiet kiem:      $" << Tong << endl;
    return 0;
}