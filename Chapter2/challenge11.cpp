#include <iostream>

using namespace std;

int main() {
    // Dung tích bình xăng và trung bình số dặm trên mỗi gallon
    double gasTankCapacity = 20.0;
    double townMileage = 23.5;
    double highwayMileage = 28.9;

    // Tính toán khoảng cách khi đi trong thành phố và trên cao tốc
    double townDistance = gasTankCapacity * townMileage;
    double highwayDistance = gasTankCapacity * highwayMileage;

    // Hiển thị kết quả
    cout << "Khoang cach khi di trong thanh pho la: " << townDistance << " dạm" << endl;
    cout << "Khoang cach khi di tren cao toc la: " << highwayDistance << " dạm" << endl;

    return 0;
}
