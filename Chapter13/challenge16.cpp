#include <iostream>
using namespace std;

class Temperature {
private:
    double temp; // Nhiệt độ được lưu trữ

public:
    // Hàm tạo
    Temperature(double t) : temp(t) {}

    // Hàm truy cập và biến đổi cho nhiệt độ
    double getTemperature() const {
        return temp;
    }

    void setTemperature(double t) {
        temp = t;
    }

    // Các hàm kiểm tra điểm đóng băng và sôi cho các chất
    bool isEthylFreezing() const {
        return temp <= -173;
    }

    bool isEthylBoiling() const {
        return temp >= 172;
    }

    bool isOxygenFreezing() const {
        return temp <= -362;
    }

    bool isOxygenBoiling() const {
        return temp >= -306;
    }

    bool isWaterFreezing() const {
        return temp <= 32;
    }

    bool isWaterBoiling() const {
        return temp >= 212;
    }
};

int main() {
    double temperature;

    // Nhập nhiệt độ từ người dùng
    cout << "Nhap nhiet do: ";
    cin >> temperature;

    // Tạo đối tượng Temperature
    Temperature tempObj(temperature);

    // Hiển thị danh sách các chất sẽ đóng băng và sôi
    cout << "\nDanh sach chat:\n";

    if (tempObj.isEthylFreezing())
        cout << "Rượu etylic se dong bang.\n";
    if (tempObj.isEthylBoiling())
        cout << "Rượu etylic se soi.\n";
    if (tempObj.isOxygenFreezing())
        cout << "Oxy se dong bang.\n";
    if (tempObj.isOxygenBoiling())
        cout << "Oxy se soi.\n";
    if (tempObj.isWaterFreezing())
        cout << "Nuoc se dong bang.\n";
    if (tempObj.isWaterBoiling())
        cout << "Nuoc se soi.\n";

    return 0;
}
