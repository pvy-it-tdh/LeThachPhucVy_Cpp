#include <iostream>
using namespace std;

int main() {
   
    int so_nam;
    while (true) {
        cout << "Nhập số năm: ";
        cin >> so_nam;
        if (so_nam >= 1) {
            break;
        } else {
            cout << "Lỗi: Vui lòng nhập một số lớn hơn hoặc bằng 1 cho số năm." << endl;
        }
    } 
    double tong_luong_mua = 0.0;
    int so_thang = so_nam * 12;
    for (int nam = 1; nam <= so_nam; nam++) {
        for (int thang = 1; thang <= 12; thang++) {
            double luong_mua;
            cout << "Nhập lượng mưa (inches) cho tháng " << thang << " năm " << nam << ": ";
            cin >> luong_mua;

            while (luong_mua < 0) {
                cout << "Lỗi: Lượng mưa không thể là số âm." << endl;
                cout << "Nhập lại lượng mưa (inches) cho tháng " << thang << " năm " << nam << ": ";
                cin >> luong_mua;
            }

            tong_luong_mua += luong_mua;
        }
    }
    double trung_binh_luong_mua = tong_luong_mua / so_thang;
    cout << "Số tháng: " << so_thang << endl;
    cout << "Tổng lượng mưa (inches): " << tong_luong_mua << endl;
    cout << "Trung bình lượng mưa mỗi tháng (inches): " << trung_binh_luong_mua << endl;

    return 0;
}
