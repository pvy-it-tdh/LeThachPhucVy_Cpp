#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Khởi tạo bộ tạo số ngẫu nhiên với thời gian hiện tại
    srand(time(0));

    // Tạo một số ngẫu nhiên trong khoảng từ 1 đến 100
    int soNgauNhien = rand() % 100 + 1;

    int doanCuaNguoiDung;

    cout << "Hãy đoán số trong khoảng từ 1 đến 100: ";

    do {
        cin >> doanCuaNguoiDung;

        if (doanCuaNguoiDung > soNgauNhien) {
            cout << "Cao quá, hãy thử lại: ";
        } else if (doanCuaNguoiDung < soNgauNhien) {
            cout << "Thấp quá, hãy thử lại: ";
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số.\n";
        }

    } while (doanCuaNguoiDung != soNgauNhien);

    return 0;
}
