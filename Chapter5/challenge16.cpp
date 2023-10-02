#include <iostream>
using namespace std;

int main(){
    double lai_suat_hang_nam;
    double so_du_ban_dau;
    int thang;
    cout << "Nhap lai sau hang nam";
    cin >> lai_suat_hang_nam;

    cout << "nhap so du ban dau trong tai khoan";
    cin >> so_du_ban_dau;

    cout << "Nhap so thang da troi qua trong qua trinh thiet lap tai khoan ";
    cin >> thang;
    double so_du = so_du_ban_dau;
    double tong_tien_gui = 0.0;
    double tong_tien_rut = 0.0;
    double tong_lai_suatt_da_kiem_duoc = 0.0;

    for (int i = 1; i <= thang; i++) {
        
        double tien_gui;
        cout << "Nhap so tien gui trong thang" << i << ": $";
        cin >> tien_gui;
        if (tien_gui < 0) {
            cout << "Loi" << endl;
            i--;
        } else {
            so_du += tien_gui;
            tong_tien_gui += tien_gui;
        }

        
        double tien_rut;
        cout << "Nhap so tien rut trong thang " << i << ": $";
        cin >> tien_rut;

        
        if (tien_rut < 0) {
            cout << "Loi" << endl;
            i--; 
        } else if (tien_rut > so_du) {
            cout << "Loi" << endl;
            i--; 
        } else {
            so_du -= tien_rut;
            tong_tien_rut += tien_rut;
        
        double lai_suatt_hang_thang = lai_suat_hang_nam / 12.0;
        double lai_suatt_hang_thang_cong_them = so_du * (lai_suatt_hang_thang / 100.0);
        so_du += lai_suatt_hang_thang_cong_them;
        tong_lai_suatt_da_kiem_duoc += lai_suatt_hang_thang_cong_them;
    }
    cout << "So du cuoi cung " << so_du << endl;
    cout << "Tong so tien gui" << tong_tien_gui << endl;
    cout << "Tong so tien rut " << tong_tien_rut << endl;
    cout << "tong so lai suat da kiem duoc" << tong_lai_suatt_da_kiem_duoc << endl;

    return 0;
}
