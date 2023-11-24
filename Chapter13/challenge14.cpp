#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
using namespace std;

class Die {
private:
    int mat;

public:
    // Hàm tạo mặc định
    Die() {
        mat = 1; // Giá trị ban đầu của mặt xúc xắc
    }

    // Hàm mô phỏng việc lăn xúc xắc
    void lan() {
        mat = rand() % 6 + 1; // Lấy giá trị ngẫu nhiên từ 1 đến 6
    }

    // Hàm trả về giá trị của mặt xúc xắc
    int getMat() const {
        return mat;
    }
};

class FishingGame {
private:
    int diemCauCa; // Tổng số điểm câu cá

public:
    // Hàm tạo mặc định
    FishingGame() : diemCauCa(0) {}

    // Hàm mô phỏng việc câu cá
    void cauCa() {
        Die xucXac; // Tạo một đối tượng Die để mô phỏng lăn xúc xắc

        // Hỏi người chơi có muốn câu cá không
        char traLoi;
        cout << "Ban muon cau ca khong? (y/n): ";
        cin >> traLoi;

        // Lặp cho đến khi người chơi không muốn câu cá nữa
        while (traLoi == 'y' || traLoi == 'Y') {
            xucXac.lan(); // Lăn xúc xắc
            int giaTri = xucXac.getMat(); // Lấy giá trị của mặt xúc xắc

            // Hiển thị vật phẩm và số điểm tương ứng
            cout << "Ban da bat duoc: ";
            switch (giaTri) {
                case 1:
                    cout << "Mot con ca khong lo (+5 diem)\n";
                    diemCauCa += 5;
                    break;
                case 2:
                    cout << "Mot chiec giay cu (+1 diem)\n";
                    diemCauCa += 1;
                    break;
                case 3:
                    cout << "Mot con ca nho (+2 diem)\n";
                    diemCauCa += 2;
                    break;
                // Thêm các trường hợp khác tương ứng với các vật phẩm khác
                default:
                    std::cout << "Khong co gi ca\n";
            }

            // Hỏi người chơi có muốn câu tiếp không
            cout << "Ban muon cau tiep khong? (y/n): ";
            cin >> traLoi;
        }

        // Hiển thị tổng số điểm câu cá
        cout << "Tong so diem cau ca cua ban la: " << diemCauCa << " diem\n";

        // Hiển thị thông báo kết quả cuối cùng
        if (diemCauCa >= 10) {
            cout << "Chuc mung! Ban la mot nguoi cau ca gioi!\n";
        } else {
            cout << "Rat tiec! Ban chua dat duoc so diem can thiet.\n";
        }
    }
};

int main() {
    // Khởi tạo seed cho rand() bằng thời gian hiện tại
    srand(time(0));

    // Tạo một đối tượng FishingGame và bắt đầu trò chơi
    FishingGame troChoi;
    troChoi.cauCa();

    return 0;
}
