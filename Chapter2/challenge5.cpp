#include <iostream>

using namespace std;

int main() {
    // Các giá trị
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;

    // Tính tổng các giá trị
    int sum = value1 + value2 + value3 + value4 + value5;

    // Tính trung bình
    double average = static_cast<double>(sum) / 5;

    // Hiển thị kết quả
    cout << "Trung binh cua cac gia tri la: " << average << endl;

    return 0;
}
