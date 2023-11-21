#include <iostream>

using namespace std;

int main() {
    // Diện tích một acre và diện tích đất cụ thể
    double acresInOneAcre = 43560.0;
    double landArea = 391876.0;

    // Tính toán số lượng acres
    double numberOfAcres = landArea / acresInOneAcre;

    // Hiển thị kết quả
    cout << "So luong acres trong dien tich dat la: " << numberOfAcres << " acres" << endl;

    return 0;
}
