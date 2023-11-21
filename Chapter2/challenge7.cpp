#include <iostream>

using namespace std;

int main() {
    // Tốc độ tăng cao mực nước biển (mỗi năm)
    double oceanRiseRate = 1.5;  // millimeters

    // Số năm trong tương lai
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Tính toán tăng cao của mực nước biển trong tương lai
    double riseIn5Years = oceanRiseRate * years5;
    double riseIn7Years = oceanRiseRate * years7;
    double riseIn10Years = oceanRiseRate * years10;

    // Hiển thị kết quả
    cout << "Sau " << years5 << " nam, muc nuoc bien se tang cao them: " << riseIn5Years << " mm" << endl;
    cout << "Sau " << years7 << " nam, muc nuoc bien se tang cao them: " << riseIn7Years << " mm" << endl;
    cout << "Sau " << years10 << " nam, muc nuoc bien se tang cao them: " << riseIn10Years << " mm" << endl;

    return 0;
}
