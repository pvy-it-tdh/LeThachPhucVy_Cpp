//Chuong trinh tinh thue dat
#include <iostream>
using namespace std;
int main()
{
    const double Mien = 5000;
    double TaiSan;
    double MucThue;
    //Nhap gia tri tai san
    cout << "Nhap gia tri tai san: $";
    cin >> TaiSan;
    cout << "Nhap thue: $";
    cin >> Thue;
    double  DinhGia = TaiSan * 0.6;
    double Thue = (DinhGia - Mien) * (MucThue / 100);
    double ThueTheoQuy = Thue / 4;
    cout << "Gia tri tai san duoc dinh gia: $" << DinhGia << endl;
    cout << "Thue hang quy cua tai san duoc dinh gia: $" << ThueTheoQuy << endl;
    return 0;
}
