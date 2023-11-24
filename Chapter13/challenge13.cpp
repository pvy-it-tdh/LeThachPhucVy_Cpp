#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
using namespace std;

class Coin {
private:
    string sideUp;

public:
    // Hàm tạo mặc định
    Coin() {
        // Khởi tạo seed cho rand() bằng thời gian hiện tại
        srand(time(0));
        // Xác định ngẫu nhiên mặt của đồng xu hướng lên trên
        tung();
    }

    // Hàm mô phỏng việc tung đồng xu
    void tung() {
        // Xác định ngẫu nhiên mặt của đồng xu
        if (rand() % 2 == 0) {
            sideUp = "heads"; // "đầu"
        } else {
            sideUp = "tails"; // "đuôi"
        }
    }

    // Hàm trả về giá trị của biến thành viên sideUp
    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    // Tạo ba đối tượng Coin đại diện cho phần tư, xu và niken
    Coin phanTu, xu, niken;

    // Số dư ban đầu
    double soDu = 0.0;

    // Chơi trò chơi tung đồng xu
    while (soDu < 1.0) {
        // Chọn ngẫu nhiên một đồng xu để tung
        int luaChon = rand() % 3;
        Coin *coin;

        // Chọn đồng xu tương ứng với lựa chọn ngẫu nhiên
        if (luaChon == 0) {
            coin = &phanTu;
        } else if (luaChon == 1) {
            coin = &xu;
        } else {
            coin = &niken;
        }

        // Tung đồng xu
        coin->tung();

        // Hiển thị kết quả
        cout << "Mat ban dau huong len: " << coin->getSideUp() << "\n";

        // Nếu mặt là "heads", thêm giá trị của đồng xu vào số dư
        if (coin->getSideUp() == "heads") {
            if (coin == &phanTu) {
                soDu += 0.25;
            } else if (coin == &xu) {
                soDu += 0.1;
            } else {
                soDu += 0.05;
            }
        }

        // Hiển thị số dư hiện tại
        cout << "So du hien tai: $" << soDu << "\n";
    }

    // Kết luận trò chơi
    if (soDu == 1.0) {
        cout << "Chuc mung! Ban da thang!\n";
    } else {
        cout << "Rat tiec! Ban da thua!\n";
    }

    return 0;
}
