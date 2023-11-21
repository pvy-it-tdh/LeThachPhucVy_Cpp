#include <iostream>

using namespace std;

int main() {
    // Tổng doanh số bán hàng của công ty
    double totalSales = 8.6;  // tỷ USD

    // Tính doanh số bán hàng của khu vực Miền Đông (East Coast)
    double eastCoastSalesPercentage = 0.58;  // 58%
    double eastCoastSales = totalSales * eastCoastSalesPercentage;

    // Hiển thị kết quả
    cout << "Doanh so ban hang cua khu vuc Mien Dong la: $" << eastCoastSales << " trieu" << endl;

    return 0;
}
