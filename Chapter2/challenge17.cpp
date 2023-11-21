#include <iostream>

using namespace std;

int main() {
    // Số lượng cổ phiếu và giá cổ phiếu mỗi cổ phiếu
    int numberOfShares = 750;
    double stockPricePerShare = 35.00;

    // Tỷ lệ hoa hồng
    double commissionRate = 0.02;  // 2%

    // Tính toán giá trị mà Kathryn phải trả
    double stockCost = numberOfShares * stockPricePerShare;
    double commission = stockCost * commissionRate;
    double totalAmountPaid = stockCost + commission;

    // Hiển thị kết quả
    cout << "Amount paid for the stock alone: $" << stockCost << endl;
    cout << "Amount of the commission: $" << commission << endl;
    cout << "Total amount paid: $" << totalAmountPaid << endl;

    return 0;
}
