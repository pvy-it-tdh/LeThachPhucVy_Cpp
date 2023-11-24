#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor
    Date(int m, int d, int y) : month(m), day(d), year(y) {
        validateDate();
    }

    // Hàm thành viên để in ngày theo định dạng 25/12/2014
    void printFormat1() const {
        cout << month << '/' << day << '/' << year << '\n';
    }

    // Hàm thành viên để in ngày theo định dạng 25 tháng 12 năm 2014
    void printFormat2() const {
        cout << day << " thang " << month << " nam " << year << '\n';
    }

    // Hàm thành viên để in ngày theo định dạng 25 tháng 12 năm 2014
    void printFormat3() const {
        cout << day << " thang " << month << " nam " << year << '\n';
    }

private:
    // Hàm kiểm tra hợp lệ của ngày, tháng, năm
    void validateDate() {
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            std::cerr << "Ngay khong hop le.\n";
            exit(EXIT_FAILURE);
        }
    }
};

int main() {
    // Tạo một đối tượng Date
    Date myDate(12, 25, 2014);

    // In ngày theo các định dạng yêu cầu
    cout << "Ngay theo dinh dang 1: ";
    myDate.printFormat1();

    cout << "Ngay theo dinh dang 2: ";
    myDate.printFormat2();

    cout << "Ngay theo dinh dang 3: ";
    myDate.printFormat3();

    return 0;
}
