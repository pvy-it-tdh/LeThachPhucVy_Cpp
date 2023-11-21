#include <iostream>

using namespace std;

int main() {
    // Dung tích bình xăng và quãng đường đi được trước khi đổ xăng
    double gallonsOfGas = 15.0;
    double milesDriven = 375.0;

    // Tính toán MPG
    double mpg = milesDriven / gallonsOfGas;

    // Hiển thị kết quả
    cout << "Xe nay co so MPG la: " << mpg << " dạm trên mỗi gallon" << endl;

    return 0;
}
