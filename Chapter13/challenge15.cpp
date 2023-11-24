#include <iostream>
#include <cmath> // For pow() function
using namespace std;

class MortgagePayment {
private:
    double loanAmount;   // Số tiền của khoản vay
    double interestRate; // Lãi suất hàng năm
    int years;           // Số năm vay

public:
    // Hàm tạo mặc định
    MortgagePayment() : loanAmount(0), interestRate(0), years(0) {}

    // Hàm thiết lập giá trị cho vay, lãi suất và số năm vay
    void setLoanDetails(double loan, double rate, int numYears) {
        // Kiểm tra xem giá trị nhập vào có hợp lệ không
        if (loan < 0 || rate < 0 || numYears < 0) {
            cout << "Gia tri khong hop le. Khong chap nhan so am.\n";
            return;
        }

        loanAmount = loan;
        interestRate = rate;
        years = numYears;
    }

    // Hàm tính số tiền thanh toán hàng tháng
    double calculateMonthlyPayment() const {
        double monthlyRate = interestRate / 12 / 100; // Lãi suất hàng tháng
        int numberOfPayments = years * 12;             // Tổng số thanh toán

        double monthlyPayment = (loanAmount * monthlyRate) / (1 - pow(1 + monthlyRate, -numberOfPayments));

        return monthlyPayment;
    }

    // Hàm trả về tổng số tiền trả ngân hàng khi kết thúc khoản vay
    double calculateTotalPayment() const {
        return calculateMonthlyPayment() * years * 12;
    }
};

int main() {
    MortgagePayment mortgage;

    // Nhập thông tin vay từ người dùng
    double loan, rate;
    int years;

    cout << "Nhap so tien vay: $";
    cin >> loan;

    cout << "Nhap lai suat hang nam (%): ";
    cin >> rate;

    cout << "Nhap so nam vay: ";
    cin >> years;

    // Thiết lập giá trị cho lớp MortgagePayment
    mortgage.setLoanDetails(loan, rate, years);

    // Hiển thị kết quả
    cout << "\nKet qua:\n";
    cout << "So tien thanh toan hang thang: $" << mortgage.calculateMonthlyPayment() << "\n";
    cout << "Tong so tien tra ngan hang khi ket thuc khoan vay: $" << mortgage.calculateTotalPayment() << "\n";

    return 0;
}
