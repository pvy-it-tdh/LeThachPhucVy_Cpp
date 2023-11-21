#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // Yêu cầu người dùng nhập số tầng của khách sạn
    int so_tang;
    cout << "Nhập số tầng của khách sạn: ";
    cin >> so_tang;

    int tong_so_phong = 0;
    int tong_phong_da_dat = 0;

    for (int tang = 1; tang <= so_tang; tang++) {
        int so_phong_tren_tang;
        int so_phong_da_dat_tren_tang;

        cout << "Nhập số phòng trên tầng " << tang << ": ";
        cin >> so_phong_tren_tang;

        cout << "Số phòng đã đặt trên tầng " << tang << ": ";
        cin >> so_phong_da_dat_tren_tang;


        tong_so_phong += so_phong_tren_tang;
        tong_phong_da_dat += so_phong_da_dat_tren_tang;
    }

    double ty_le_phong_da_dat = (static_cast<double>(tong_phong_da_dat) / static_cast<double>(tong_so_phong)) * 100.0;

    // Hiển thị kết quả
    cout << "Tổng số phòng trong khách sạn: " << tong_so_phong << endl;
    cout << "Số phòng đã đặt: " << tong_phong_da_dat << endl;
    cout << "Số phòng trống: " << tong_so_phong - tong_phong_da_dat << endl;
    cout << "Tỷ lệ phòng đã đặt: " << fixed << setprecision(2) << ty_le_phong_da_dat << "%" << endl;

    return 0;
}
