#include <iostream>

using namespace std;

int main() {
    // Giá thành của bo mạch điện tử
    double costPrice = 14.95;

    // Tỷ lệ lợi nhuận
    double profitRate = 0.35;  // 35%

    // Tính toán giá bán
    double sellingPrice = costPrice * (1 + profitRate);

    // Hiển thị kết quả
    cout << "Gia ban cua bo mach dien tu la: $" << sellingPrice << endl;

    return 0;
}
