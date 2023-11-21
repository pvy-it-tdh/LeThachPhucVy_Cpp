#include <iostream>

using namespace std;

int main() {
    //  Nhập ngân sách cho tháng
    cout << "Nhập ngân sách cho tháng: $";
    double nganSach;
    cin >> nganSach;

    double tongChiphi = 0.0;
    double chiPhi;

    char tiepTucNhapChiPhi;

    do {
        // Yêu cầu người dùng nhập chi phí
        cout << "Nhập một chi phí: $";
        cin >> chiPhi;

        // Cộng chi phí vào tổng
        tongChiphi += chiPhi;

        //  Hỏi người dùng có muốn thêm chi phí khác không
        cout << "Bạn có muốn thêm chi phí khác không? (c/k): ";
        cin >> tiepTucNhapChiPhi;

    } while (tiepTucNhapChiPhi == 'c' || tiepTucNhapChiPhi == 'c');

    // Tính chênh lệch giữa ngân sách và tổng chi phí
    double chenhLech  = nganSach - tongChiphi;

    // Hiển thị kết quả
    if (chenhLech  >= 0) {
        cout << "Bạn dưới ngân sách: $" << chenhLech  << endl;
    } else {
        cout << "Bạn vượt quá ngân sách: $" << -chenhLech  << endl;
    }

    return 0;
}
