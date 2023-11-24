#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Hàm tạo mặc định
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}

    // Hàm tạo số 2
    Inventory(int itemNumber, int quantity, double cost) {
        setItemNumber(itemNumber);
        setQuantity(quantity);
        setCost(cost);
        setTotalCost();
    }

    // Hàm thiết lập số mục của mục đó
    void setItemNumber(int number) {
        if (number >= 0) {
            itemNumber = number;
        } else {
            cout << "Error: Item number must be non-negative." << std::endl;
        }
    }

    // Hàm thiết lập số lượng
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
            setTotalCost();
        } else {
            cout << "Error: Quantity must be non-negative." << std::endl;
        }
    }

    // Hàm thiết lập chi phí cho mỗi đơn vị
    void setCost(double c) {
        if (c >= 0.0) {
            cost = c;
            setTotalCost();
        } else {
           cout << "Error: Cost must be non-negative." << std::endl;
        }
    }

    // Hàm tính tổng chi phí
    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Các hàm truy cập thông tin
    int getItemNumber() const { return itemNumber; }
    int getQuantity() const { return quantity; }
    double getCost() const { return cost; }
    double getTotalCost() const { return totalCost; }
};

int main() {
    // Tạo một đối tượng Inventory
    Inventory item1(101, 20, 15.99);

    // In thông tin của đối tượng
    cout << "Item Number: " << item1.getItemNumber() << "\n";
    cout << "Quantity: " << item1.getQuantity() << "\n";
    cout << "Cost per unit: $" << item1.getCost() << "\n";
    cout << "Total Cost: $" << item1.getTotalCost() << "\n";

    return 0;
}
