#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Hàm tạo chấp nhận tên, số ID, phòng ban và chức vụ
    Employee(string employeeName, int employeeId, string employeeDepartment, string employeePosition)
        : name(employeeName), idNumber(employeeId), department(employeeDepartment), position(employeePosition) {}

    // Hàm tạo chấp nhận tên và số ID, phòng ban và chức vụ được gán giá trị mặc định
    Employee(string employeeName, int employeeId)
        : name(employeeName), idNumber(employeeId), department(""), position("") {}

    // Hàm tạo mặc định
    Employee() : name(""), idNumber(0), department(""), position("") {}

    // Các hàm truy cập
    string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }

    // Các hàm biến đổi
    void setName(string newName) { name = newName; }
    void setIdNumber(int newId) { idNumber = newId; }
    void setDepartment(string newDepartment) { department = newDepartment; }
    void setPosition(string newPosition) { position = newPosition; }

    // Hàm hiển thị thông tin nhân viên
    void displayEmployee() const {
        cout << "Ho ten: " << name << "\nMa so CMND: " << idNumber
                  << "\nBo phan: " << department << "\nChuc vu: " << position << "\n\n";
    }
};

int main() {
    // Tạo ba đối tượng Nhân viên
    Employee employee1("Susan Meyers", 47899, "Pho chu tich ke toan", "");
    Employee employee2("Mark Jones", 39119);
    Employee employee3;

    // Hiển thị thông tin nhân viên
    cout << "Thong tin nhan vien 1:\n";
    employee1.displayEmployee();

    cout << "Thong tin nhan vien 2:\n";
    employee2.displayEmployee();

    cout << "Thong tin nhan vien 3:\n";
    employee3.displayEmployee();

    return 0;
}
