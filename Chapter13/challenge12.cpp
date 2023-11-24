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
    // Tạo một đối tượng Coin
    Coin dongXu;

    // Hiển thị mặt ban đầu hướng lên
    cout << "Mat ban dau huong len: " << dongXu.getSideUp() << "\n";

    // Biến đếm số lần mặt ngửa lên và số lần mặt đuôi lên trên
    int soLanMatNgua = 0;
    int soLanMatDui = 0;

    // Mô phỏng việc tung đồng xu 20 lần
    for (int i = 0; i < 20; ++i) {
        dongXu.tung(); // Tung đồng xu
        cout << "Lan " << i + 1 << ": " << dongXu.getSideUp() << "\n";
        
        // Đếm số lần mặt ngửa lên và số lần mặt đuôi lên trên
        if (dongXu.getSideUp() == "heads") {
            soLanMatNgua++;
        } else {
            soLanMatDui++;
        }
    }

    // Hiển thị số lần mặt ngửa lên và số lần mặt đuôi lên trên
    cout << "So lan mat ngua len: " << soLanMatNgua << "\n";
    cout << "So lan mat dui len: " << soLanMatDui << "\n";

    return 0;
}
