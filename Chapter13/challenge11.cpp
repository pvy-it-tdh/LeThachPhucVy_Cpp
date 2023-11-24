#include <iostream>
using namespace std;

class PayRoll {
private:
    double luongGio;
    double soGioLamViec;
    double tongLuong;

public:
    // Hàm tạo
    PayRoll(double hourlyRate) : luongGio(hourlyRate), soGioLamViec(0), tongLuong(0) {}

    // Hàm nhập số giờ làm việc từ người dùng
    void NhapSoGioLamViec() {
        do {
            cout << "Nhap so gio lam viec (khong qua 60 gio): ";
            cin >> soGioLamViec;
            if (soGioLamViec < 0 || soGioLamViec > 60) {
                cout << "Loi: So gio lam viec khong hop le. Vui long nhap lai.\n";
            }
        } while (soGioLamViec < 0 || soGioLamViec > 60);

        TinhTongLuong();
    }

    // Hàm tính tổng lương
    void TinhTongLuong() {
        tongLuong = luongGio * soGioLamViec;
    }

    // Hàm in thông tin tổng lương
    void InTongLuong() const {
        cout << "Tong luong: $" << tongLuong << "\n";
    }
};

int main() {
    const int SO_NHAN_VIEN = 7;
    const double LUONG_GIO_MAC_DINH = 10.0;

    // Tạo mảng bảy đối tượng PayRoll
    PayRoll nhanVien[SO_NHAN_VIEN] = {LUONG_GIO_MAC_DINH};

    // Nhập số giờ làm việc và tính tổng lương cho mỗi nhân viên
    for (int i = 0; i < SO_NHAN_VIEN; ++i) {
        cout << "Nhap thong tin cho nhan vien #" << i + 1 << ":\n";
        nhanVien[i].NhapSoGioLamViec();
    }

    // In tổng lương của mỗi nhân viên
    for (int i = 0; i < SO_NHAN_VIEN; ++i) {
        cout << "Nhan vien #" << i + 1 << " - ";
        nhanVien[i].InTongLuong();
    }

    return 0;
}
