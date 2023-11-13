#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Phone_Fee {
private:
    float _time;

public:
    static long PRICE_PHONE;

    long calFee() {
        cout <<"nhap thoi gian ";
        cin >> _time;
        return PRICE_PHONE * this->_time;
    }
};

long Phone_Fee::PRICE_PHONE = 1000;

class Internet_Fee {
private:
    long _luongTruyCap;

public:
    static long PRICE_INTERNET;

    long calFee() {
        cout << "nhap luong truy cap ";
        cin >>_luongTruyCap;
        return PRICE_INTERNET * this->_luongTruyCap;
    }

    void datLuongTruyCap(long luongTruyCap) {
        this->_luongTruyCap = luongTruyCap;
    }
};

long Internet_Fee::PRICE_INTERNET = 200;

class Customer {
private:
    string FullName;
    string ID;
    string Address;

public:
    void dangKy() {
        cin.ignore();
        cout << "Nhap ho va ten:";
        getline(cin, this->FullName);
        cout << "Nhap so chung minh:";
        cin >> this->ID;
        cin.ignore(); // để xử lý kí tự xuống dòng
        cout << "Nhap dia chi:";
        cin.ignore(); // để xử lý kí tự xuống dòng
        getline(cin, this->Address);
    }

    void xuat() const {
        cout << "Ho va ten: " << FullName << endl;
        cout << "So chung minh: " << ID << endl;
        cout << "Dia chi: " << Address << endl;
    }
};

class Basic {
private:
    Phone_Fee _phone_fee;
    Internet_Fee _internet_fee;

public:
    long calFee() {
        return _phone_fee.calFee() + _internet_fee.calFee() + static_cast<long>(0.1 * Phone_Fee::PRICE_PHONE);
    }
};

class Data_Fee {
private:
    Phone_Fee _phone_fee;
    long _luongTruyCap;

public:
    static long NGUONG_MIEN_PHI;
    static long CUOC_THUE_BAO;

    long calFee() {
        long phone_fee = _phone_fee.calFee();
        long internet_fee = 0;
        if (_luongTruyCap > NGUONG_MIEN_PHI) {
            Internet_Fee temp;
            temp.PRICE_INTERNET = Internet_Fee::PRICE_INTERNET;
            temp.datLuongTruyCap(_luongTruyCap - NGUONG_MIEN_PHI);
            internet_fee = CUOC_THUE_BAO + temp.calFee();
        } else {
            internet_fee = CUOC_THUE_BAO;
        }
        return phone_fee + internet_fee;
    }
};

long Data_Fee::NGUONG_MIEN_PHI = 100;
long Data_Fee::CUOC_THUE_BAO = 50;

class Data_Fix {
private:
    Phone_Fee _phone_fee;

public:
    static long MUC_CO_DINH;

    long calFee() {
        return static_cast<long>(0.9 * (_phone_fee.calFee())) + MUC_CO_DINH;
    }
};

long Data_Fix::MUC_CO_DINH = 1000000;

class Contract {
private:
    Customer _cus;
    long choice;
    Basic _basic;
    Data_Fee _data_fee;
    Data_Fix _data_fix;

public:
    void dangKy() {
        _cus.dangKy();
        cout << "Chon goi cuoc: 1-Basic, 2-Data_Fee, 3-Data_Fix:\n";
        cin >> choice;
    }

    void thongBao() {
        cout << "Khach hang:\n";
        _cus.xuat();
       
        if (choice == 1) {
            cout << _basic.calFee();
            cout << "La so tien goi cuoc";
            
        } else if (choice == 2) {
            cout << _basic.calFee();
            cout << "La so tien goi cuoc";
            
        } else if (choice == 3) {
            cout << _basic.calFee();
            cout << "La so tien goi cuoc";
            
        } else {
            cout << "Goi cuoc khong hop le!";
        }
        cout << endl;
    }
};

class QuanLy {
    vector<Contract> _ds;

public:
    void dangKy() {
        int n;
        cout << "Nhap luong hop dong:";
        cin >> n;
        for (int i = 0; i < n; i++) {
            Contract c;
            c.dangKy();
            _ds.push_back(c);
        }
    }

    void thongBao() {
        for (int i = 0; i < _ds.size(); i++) {
            _ds[i].thongBao();
        }
    }
};

int main() {
    
    QuanLy ql;
    ql.dangKy();
    ql.thongBao();

    return 0;
}
