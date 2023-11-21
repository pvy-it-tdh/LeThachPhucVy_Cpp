#include <iostream>

using namespace std;

int main() {
    // Tổng số khách hàng trong cuộc khảo sát
    int totalCustomers = 16500;

    // Tỷ lệ khách hàng mua năng lượng và ưa thích nước ngọt chanh
    double percentageEnergyDrinkCustomers = 0.15;  // 15%
    double percentageCitrusFlavoredCustomers = 0.58;  // 58%

    // Tính toán số lượng khách hàng
    int energyDrinkCustomers = totalCustomers * percentageEnergyDrinkCustomers;
    int citrusFlavoredCustomers = energyDrinkCustomers * percentageCitrusFlavoredCustomers;

    // Hiển thị kết quả
    cout << "Approximate number of customers who purchase energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrusFlavoredCustomers << endl;

    return 0;
}
