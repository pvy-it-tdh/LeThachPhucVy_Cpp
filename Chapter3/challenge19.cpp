#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double Vay, LaiSuat, HangThang, SoLan, Lai, Tong, s, t;
    cout << "So tien cho vay: $";
    cin >> Vay;
    cout << "Lai suat hang thang: ";
    cin >> LaiSuat;
    cout << "So lan tra: ";
    cin >> SoLan;
    s = 1 + (LaiSuat / 100);
    t = pow(s,SoLan);
    HangThang = (((LaiSuat / 100) * t) / (t - 1)) * Vay;
    Tong = HangThang * SoLan;
    Lai = Tong - Vay;
    cout << "So tien da vay:         $" << Vay << endl;
    cout << "Lai suat hang thang:     " << LaiSuat << "%" <<endl;
    cout << "So lan tra:              " << SoLan << endl;
    cout << "So tien tra hang thang: $" << HangThang << endl;
    cout << "So tien phai tra:       $" << Tong << endl;
    cout << "Lai:                    $" << Lai << endl;
    return 0;
}