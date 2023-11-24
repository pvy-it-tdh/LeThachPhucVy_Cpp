#include <iostream>
using namespace std;

class DanSo {
private:
    int danSo;
    int soLanSinh;
    int soLuongTuVong;

public:
    // Hàm tạo
    DanSo(int danSo, int soLanSinh, int soLuongTuVong)
        : danSo(danSo), soLanSinh(soLanSinh), soLuongTuVong(soLuongTuVong) {
        if (danSo < 1 || soLanSinh < 0 || soLuongTuVong < 0) {
            cout << "Error: Invalid population or birth/death numbers.\n";
            exit(EXIT_FAILURE);
        }
    }

    // Hàm tính tỷ lệ sinh
    double TyLeSinh() const {
        return static_cast<double>(soLanSinh) / danSo;
    }

    // Hàm tính tỷ lệ tử vong
    double TyLeTuVong() const {
        return static_cast<double>(soLuongTuVong) / danSo;
    }
};

int main() {
    // Nhập thông tin dân số từ người dùng
    int danSo, soLanSinh, soLuongTuVong;
    cout << "Nhap dan so: ";
    cin >> danSo;
    cout << "Nhap so lan sinh: ";
    cin >> soLanSinh;
    cout << "Nhap so luong tu vong: ";
    cin >> soLuongTuVong;

    // Tạo đối tượng DanSo
    DanSo danSoObj(danSo, soLanSinh, soLuongTuVong);

    // In tỷ lệ sinh và tỷ lệ tử vong
    cout << "Ty le sinh: " << danSoObj.TyLeSinh() << "\n";
    cout << "Ty le tu vong: " << danSoObj.TyLeTuVong() << "\n";

    return 0;
}
