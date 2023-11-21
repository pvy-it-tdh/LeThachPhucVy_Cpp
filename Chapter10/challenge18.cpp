#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Mở tệp để đọc
    ifstream inputFile("People.txt");

    // Kiểm tra xem tệp có được mở thành công hay không
    if (!inputFile.is_open()) {
        cerr << "Lỗi khi mở tệp.\n";
        return 1;
    }

    cout << "SỰ PHÁT TRIỂN DÂN SỐ PRAIRIEVILLE\n(mỗi * biểu thị 1,000 người)\n";

    // Đọc và hiển thị dữ liệu dân số cho mỗi năm
    int nam, danSo;

    while (inputFile >> nam >> danSo) {
        cout << nam << " ";
        
        // Hiển thị '*' cho mỗi 1,000 người
        for (int i = 0; i < danSo / 1000; ++i) {
            cout << '*';
        }

        cout << endl;
    }

    // Đóng tệp
    inputFile.close();

    return 0;
}
