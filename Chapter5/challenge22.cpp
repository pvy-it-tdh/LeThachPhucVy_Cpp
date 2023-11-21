#include <iostream>

using namespace std;

int main() {
    int n;

    // Nhập một số nguyên dương không lớn hơn 15
    cout << "Nhập một số nguyên dương không lớn hơn 15: ";
    cin >> n;

    // Kiểm tra điều kiện hợp lệ
    if (n > 0 && n <= 15) {
        // Hiển thị hình vuông
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << 'X';
            }
            cout << endl;
        }
    } else {
        cout << "Số không hợp lệ. Vui lòng nhập lại." << endl;
    }

    return 0;
}
