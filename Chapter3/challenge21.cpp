#include<iostream>
using namespace std;
int main()
{
    float dk;
    cout << "Nhap duong kinh cua chiec pizza: ";
    cin >> dk;
    float dt = 3.14 * (dk*dk) / 4;
    int SoNguoi;
    cout << "Nhap so nguoi: ";
    cin >> SoNguoi;
    int Solat = SoNguoi * 4;
    float S = Solat * 14.125;
    int SoBanh = S / dt;
    cout << "So banh: " << SoBanh << endl;
    return 0;
}