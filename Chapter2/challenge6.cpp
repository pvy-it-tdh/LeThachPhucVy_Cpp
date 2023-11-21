#include <iostream>

using namespace std;

int main() {
    // Khai báo và khởi tạo biến
    double payAmount = 2200.0;
    int payPeriods = 26;
    double annualPay;

    // Tính toán thu nhập hàng năm
    annualPay = payAmount * payPeriods;

    // Hiển thị kết quả
    cout << "Thu nhap hang nam cua nhan vien la: $" << annualPay << endl;

    return 0;
}
