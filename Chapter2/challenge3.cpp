#include <iostream>

using namespace std;

int main() {
    // Tổng giá trị mua hàng
    double purchaseAmount = 95.0;  // USD

    // Tỷ lệ thuế quốc gia và thuế hạt nhân
    double stateSalesTaxRate = 0.04;  // 4%
    double countySalesTaxRate = 0.02;  // 2%

    // Tính toán tổng thuế
    double stateSalesTax = purchaseAmount * stateSalesTaxRate;
    double countySalesTax = purchaseAmount * countySalesTaxRate;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // Hiển thị kết quả
    cout << "Tong thue ban hang la: $" << totalSalesTax << " trieu" << endl;

    return 0;
}
