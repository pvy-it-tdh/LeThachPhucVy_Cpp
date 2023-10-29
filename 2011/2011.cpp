#include <iostream>

using namespace std;

class MayLoc {
private:
    double m_tgian;

public:
    void setTgian(double t);
    double getThoiGian();
};

void MayLoc::setTgian(double t) {
    m_tgian = t;
}

double MayLoc::getThoiGian() {
    return this->m_tgian;   
}

class MayXucTac : public MayLoc {
private:
    int _luongHoaChat;
    float _congSuatLoc;

public:
    void nhap() {
        double thoiGian = 0;
        cout << "Nhap thoi gian hoat dong: ";
        cin >> thoiGian;
        this->setTgian(thoiGian);
        cout << "Nhap Luong hoa chat: ";
        cin >> this->_luongHoaChat;
        cout << "Nhap cong suat loc cua may: ";
        cin >> this->_congSuatLoc;
    }

    float CongSuatThucTe() {
        if (this->getThoiGian() >= 10) {
            return this->_congSuatLoc * (this->_luongHoaChat / 100) / (this->getThoiGian() / 10);
        } else {
            return this->_congSuatLoc * (this->_luongHoaChat / 100);
        }
    }

    static long long DON_GIA_HOA_CHAT;
    static long long DON_GIA_THUE;

    long tinhChoPhiThueMoiMay() {
        return DON_GIA_THUE * this->getThoiGian();
    }

    long tinhChiPhi() {
        return tinhChoPhiThueMoiMay() + this->_luongHoaChat * DON_GIA_HOA_CHAT;
    }

    double tinhLuongNuoc() {
        return this->getThoiGian() * this->CongSuatThucTe();
    }
};

long long MayXucTac::DON_GIA_HOA_CHAT = 10000;
long long MayXucTac::DON_GIA_THUE = 80000;
int main() {
    cout << "Don gia hoa chat: " << MayXucTac::DON_GIA_HOA_CHAT << endl;
    MayXucTac m;
    m.nhap(); // Nhập thông tin sử dụng của máy xúc tác này
    cout << "Chi phi su dung may: " << m.tinhChiPhi() << endl;
    cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl;
    return 0;
}
