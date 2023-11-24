#include <iostream>
#include <string>
using namespace std;

class ThongTinCaNhan {
private:
    string ten;
    string diaChi;
    int tuoi;
    string dienThoai;

public:
    // Hàm khởi tạo
    ThongTinCaNhan(string ten, string diaChi, int tuoi, string dienThoai)
        : ten(ten), diaChi(diaChi), tuoi(tuoi), dienThoai(dienThoai) {}

    // Hàm truy cập thông tin
    string LayTen() const { return ten; }
    string LayDiaChi() const { return diaChi; }
    int LayTuoi() const { return tuoi; }
    string LayDienThoai() const { return dienThoai; }

    // Hàm thiết lập thông tin
    void GanTen(string newTen) { ten = newTen; }
    void GanDiaChi(string newDiaChi) { diaChi = newDiaChi; }
    void GanTuoi(int newTuoi) { tuoi = newTuoi; }
    void GanDienThoai(string newDienThoai) { dienThoai = newDienThoai; }
};

int main() {
    // Tạo ba phiên bản của lớp ThongTinCaNhan
    ThongTinCaNhan banThan("Ten Cua Ban", "Dia Chi Cua Ban", 25, "0123456789");
    ThongTinCaNhan banBe1("Ten Ban Be 1", "Dia Chi Ban Be 1", 30, "0987654321");
    ThongTinCaNhan banBe2("Ten Ban Be 2", "Dia Chi Ban Be 2", 28, "0123456789");

    // In thông tin của ba phiên bản
    cout << "Thong tin cua ban than:\n";
    cout << "Ten: " << banThan.LayTen() << "\n";
    cout << "Dia chi: " << banThan.LayDiaChi() << "\n";
    cout << "Tuoi: " << banThan.LayTuoi() << "\n";
    cout << "Dien thoai: " << banThan.LayDienThoai() << "\n\n";

    cout << "Thong tin cua ban be 1:\n";
    cout << "Ten: " << banBe1.LayTen() << "\n";
    cout << "Dia chi: " << banBe1.LayDiaChi() << "\n";
    cout << "Tuoi: " << banBe1.LayTuoi() << "\n";
    cout << "Dien thoai: " << banBe1.LayDienThoai() << "\n\n";

    cout << "Thong tin cua ban be 2:\n";
    cout << "Ten: " << banBe2.LayTen() << "\n";
    cout << "Dia chi: " << banBe2.LayDiaChi() << "\n";
    cout << "Tuoi: " << banBe2.LayTuoi() << "\n";
    cout << "Dien thoai: " << banBe2.LayDienThoai() << "\n";

    return 0;
}
