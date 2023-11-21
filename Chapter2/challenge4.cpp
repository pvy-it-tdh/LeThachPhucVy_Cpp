#include <iostream>

using namespace std;

int main() {
    // Chi phí bữa ăn
    double mealCost = 88.67;  // USD

    // Tỷ lệ thuế và tiền tip
    double taxRate = 0.0675;  // 6.75%
    double tipRate = 0.20;  // 20%

    // Tính toán thuế và tiền tip
    double taxAmount = mealCost * taxRate;
    double totalWithTax = mealCost + taxAmount;
    double tipAmount = totalWithTax * tipRate;

    // Tính toán tổng hóa đơn
    double totalBill = totalWithTax + tipAmount;

    // Hiển thị kết quả
    cout << "Gia tri bua an: $" << mealCost << endl;
    cout << "So tien thue: $" << taxAmount << endl;
    cout << "So tien tip: $" << tipAmount << endl;
    cout << "Tong hoa don: $" << totalBill << endl;

    return 0;
}
