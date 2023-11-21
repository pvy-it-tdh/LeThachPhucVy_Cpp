#include <iostream>

using namespace std;

int main() {
    // Giá của từng mục
    double price1 = 15.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 12.95;
    double price5 = 3.95;

    // Tỷ lệ thuế
    double salesTaxRate = 0.07;  // 7%

    // Tính toán tổng giá trị và số thuế
    double subtotal = price1 + price2 + price3 + price4 + price5;
    double salesTax = subtotal * salesTaxRate;
    double total = subtotal + salesTax;

    // Hiển thị kết quả
    cout << "Gia cua mon hang 1: $" << price1 << endl;
    cout << "Gia cua mon hang 2: $" << price2 << endl;
    cout << "Gia cua mon hang 3: $" << price3 << endl;
    cout << "Gia cua mon hang 4: $" << price4 << endl;
    cout << "Gia cua mon hang 5: $" << price5 << endl;

    cout << "Tong gia tri cua cac mon hang: $" << subtotal << endl;
    cout << "So thue: $" << salesTax << endl;
    cout << "Tong cong: $" << total << endl;

    return 0;
}
