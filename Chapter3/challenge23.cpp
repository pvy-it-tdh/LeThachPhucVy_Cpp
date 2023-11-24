#include <iostream>
using namespace std;
int main()
{
    const int SoLuong = 1000;
    const double GiaMua = 45.50;
    const double GiaBan = 56.90;
    const  double PhanHoaHong = 0.02;
    double TienMua, TienBan, HoaHongMua, HoaHongBan, Lai;
    TienMua = GiaMua * SoLuong;
    TienBan = GiaBan * SoLuong;
    HoaHongMua = TienMua * PhanHoaHong;
    HoaHongBan = TienBan * PhanHoaHong;
    Lai = TienBan - TienMua - HoaHongBan - HoaHongMua;
    cout << "So tien Joe mua co phieu: $" << TienMua << endl;
    cout << "So tien hoa hong khi mua: $" << HoaHongMua << endl;
    cout << "So tien Joe ban co phieu: $" << TienBan << endl;
    cout << "So tien hoa hong khi ban: $" << HoaHongBan << endl;
    cout << "So tien Joe lai:          $" << Lai << endl;
    return 0;
}