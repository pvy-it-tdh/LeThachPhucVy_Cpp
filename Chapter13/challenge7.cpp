#include <iostream>
using namespace std;

class TestScores {
private:
    double diem1;
    double diem2;
    double diem3;

public:
    // Hàm tạo
    TestScores(double d1, double d2, double d3) : diem1(d1), diem2(d2), diem3(d3) {}

    // Hàm truy cập và biến đổi
    double LayDiem1() const { return diem1; }
    double LayDiem2() const { return diem2; }
    double LayDiem3() const { return diem3; }

    void GanDiem1(double d) { diem1 = d; }
    void GanDiem2(double d) { diem2 = d; }
    void GanDiem3(double d) { diem3 = d; }

    // Hàm tính điểm trung bình
    double DiemTrungBinh() const {
        return (diem1 + diem2 + diem3) / 3.0;
    }
};

int main() {
    // Nhập điểm kiểm tra từ người dùng
    double diem1, diem2, diem3;
    cout << "Nhap diem kiem tra 1: ";
    cin >> diem1;
    cout << "Nhap diem kiem tra 2: ";
    cin >> diem2;
    cout << "Nhap diem kiem tra 3: ";
    cin >> diem3;

    // Tạo một đối tượng TestScores
    TestScores diemKiemTra(diem1, diem2, diem3);

    // In điểm trung bình
    cout << "Diem trung binh la: " << diemKiemTra.DiemTrungBinh() << "\n";

    return 0;
}
