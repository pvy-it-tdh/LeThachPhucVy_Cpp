#include <iostream>
#include <iomanip>
using namespace std;

class InventoryItem {
private:
    int itemNumber;
    int quantity;
    double cost;

public:
    // Hàm tạo
    InventoryItem(int itemNum, int qty, double c) : itemNumber(itemNum), quantity(qty), cost(c) {}

    // Hàm truy cập và biến đổi cho các biến thành viên
    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    void setItemNumber(int itemNum) {
        itemNumber = itemNum;
    }

    void setQuantity(int qty) {
        quantity = qty;
    }

    void setCost(double c) {
        cost = c;
    }

    // Hàm giảm số lượng mặt hàng từ biến thành viên quantity
    void reduceQuantity(int qty) {
        if (quantity - qty >= 0) {
            quantity -= qty;
        } else {
            cout << "Loi: So luong khong du.\n";
        }
    }
};

class CashRegister {
private:
    double total;

public:
    // Hàm tạo
    CashRegister() : total(0.0) {}

    // Hàm tính tổng số tiền mua hàng và hiển thị hóa đơn
    void purchaseItem(const InventoryItem& item, int qty) {
        double itemCost = item.getCost();
        double totalPrice = itemCost * qty * 1.3; // Thêm 30% lợi nhuận

        // Tính thuế doanh thu 6%
        double tax = totalPrice * 0.06;

        // Tính tổng số tiền mua hàng
        double grandTotal = totalPrice + tax;

        // Hiển thị hóa đơn
        cout << "Mat hang: " << item.getItemNumber() << endl;
        cout << "So luong: " << qty << endl;
        cout << "Don gia: $" << fixed << setprecision(2) << itemCost << endl;
        cout << "Tong so tien mua hang: $" << totalPrice << endl;
        cout << "Thue: $" << tax << std::endl;
        cout << "Tong cong: $" << grandTotal << endl;

        // Trừ số lượng mua khỏi biến thành viên quantity của InventoryItem
        item.reduceQuantity(qty);

        // Cập nhật tổng số tiền mua hàng trong biến thành viên total của CashRegister
        total += grandTotal;
    }

    // Hàm trả về tổng số tiền mua hàng
    double getTotal() const {
        return total;
    }
};

int main() {
    // Tạo đối tượng InventoryItem
    InventoryItem item1(1, 10, 5.99);

    // Tạo đối tượng CashRegister
    CashRegister register1;

    // Mua hàng và hiển thị hóa đơn
    register1.purchaseItem(item1, 3);

    // In tổng số tiền mua hàng
    cout << "Tong so tien mua hang: $" << register1.getTotal() << endl;

    return 0;
}
