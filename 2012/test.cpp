#include <iostream>
using namespace std;

// Khai báo lớp trừu tượng
class AbstractClass {
public:
    // Phương thức trừu tượng
    virtual void abstractMethod() = 0;
};

// Lớp con kế thừa từ lớp trừu tượng
class ConcreteClass : public AbstractClass {
public:
    void abstractMethod() {
        cout << "Concrete class implementing abstract method." << endl;
    }
};

int main() {
    // Không thể khởi tạo đối tượng của lớp trừu tượng
    // AbstractClass abstractObj; // Lỗi

    ConcreteClass concreteObj;
    concreteObj.abstractMethod(); // In ra "Concrete class implementing abstract method."

    return 0;
}
