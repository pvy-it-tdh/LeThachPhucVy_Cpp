#include <iostream>
#include <string>
using namespace std;

class RetailItem {
private:
    string mieuTa;
    int donViOnHand;
    double gia;

public:
    // Hàm tạo
    RetailItem(string mieuTa, int donViOnHand, double gia)
        : mieuTa(mieuTa), donViOnHand(donViOnHand), gia(gia) {}

    // Hàm truy cập thông tin
    string LayMieuTa() const { return mieuTa; }
    int LayDonViOnHand() const { return donViOnHand; }
    double LayGia() const { return gia; }

    // Hàm thiết lập thông tin
    void GanMieuTa(string newMieuTa) { mieuTa = newMieuTa; }
    void GanDonViOnHand(int newDonViOnHand) { donViOnHand = newDonViOnHand; }
    void GanGia(double newGia) { gia = newGia; }
};

int main() {
    // Tạo ba đối tượng RetailItem
    RetailItem matHang1("Ao khoac", 12, 59.95);
    RetailItem matHang2("Quan jean thiet ke", 40, 34.95);
    RetailItem matHang3("Ao so mi", 20, 24.95);

    // In thông tin của ba đối tượng
    cout << "Mat hang #1:\n";
    cout << "Mieu ta: " << matHang1.LayMieuTa() << "\n";
    cout << "Don vi on hand: " << matHang1.LayDonViOnHand() << "\n";
    cout << "Gia: " << matHang1.LayGia() << "\n\n";

    cout << "Mat hang #2:\n";
    cout << "Mieu ta: " << matHang2.LayMieuTa() << "\n";
    cout << "Don vi on hand: " << matHang2.LayDonViOnHand() << "\n";
    cout << "Gia: " << matHang2.LayGia() << "\n\n";

    cout << "Mat hang #3:\n";
    cout << "Mieu ta: " << matHang3.LayMieuTa() << "\n";
    cout << "Don vi on hand: " << matHang3.LayDonViOnHand() << "\n";
    cout << "Gia: " << matHang3.LayGia() << "\n";

    return 0;
}
