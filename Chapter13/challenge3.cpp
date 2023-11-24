#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int modelYear;
    string make;
    int speed;

public:
    // Hàm tạo
    Car(int year, const string& brand)
        : modelYear(year), make(brand), speed(0) {}

    // Các hàm truy cập
    int getModelYear() const { return modelYear; }
    const string& getMake() const { return make; }
    int getSpeed() const { return speed; }

    // Hàm tăng tốc
    void accelerate() {
        speed += 5;
    }

    // Hàm phanh
    void brake() {
        speed -= 5;
        if (speed < 0) {
            speed = 0;
        }
    }
};

int main() {
    // Tạo đối tượng Car
    Car myCar(2022, "Toyota");

    // Tăng tốc 5 lần và hiển thị tốc độ sau mỗi lần
    for (int i = 0; i < 5; ++i) {
        myCar.accelerate();
        cout << "Toc do sau tang toc lan " << i + 1 << ": " << myCar.getSpeed() << " mph\n";
    }

    // Phanh 5 lần và hiển thị tốc độ sau mỗi lần
    for (int i = 0; i < 5; ++i) {
        myCar.brake();
        cout << "Toc do sau phanh lan " << i + 1 << ": " << myCar.getSpeed() << " mph\n";
    }

    return 0;
}
