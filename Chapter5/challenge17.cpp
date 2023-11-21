#include <iostream>

using namespace std;

int main() {
    const int soCuahang = 5;
    const char asterisk = '*';

    // Mảng lưu trữ doanh số bán hàng của từng cửa hàng
    int sales[soCuahang];

    // Nhập doanh số bán hàng cho từng cửa hàng
    for (int i = 0; i < soCuahang; ++i) {
        cout << " Nhap doanh so ban trong ngay hom nay " << i + 1 << ": ";
        cin >> sales[i];
    }

    // Hiển thị biểu đồ cột
    cout << "\nBIEU DO DOANH SO BAN HANG\n(MOI * = $100)\n";

    for (int i = 0; i < soCuahang; ++i) {
        cout << "Cuahang " << i + 1 << ": ";
        
        // In số lượng '*' tương ứng với doanh số bán hàng của cửa hàng
        for (int j = 0; j < sales[i] / 100; ++j) {
            cout << asterisk;
        }
        
        cout << endl;
    }

    return 0;
}
