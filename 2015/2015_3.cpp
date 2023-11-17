#include <iostream>
#include <vector>
using namespace std;
class Sap {
protected:

    int stt;
    float dientich;
    long doanhthu;

public:
    static long DON_GIA_THUE;

    virtual long tinhTienthue() {
        return DON_GIA_THUE * this->dientich;
    }

    virtual long tinhThueDoanhthu() = 0;

    virtual long tinhTongTien() = 0;

    virtual void nhapThongtin() {
        cout << "Nhap so thu tu: ";
        cin >> this->stt;
        cout << "Nhap dien tich: ";
        cin >> this->dientich;
        cout << "Nhap doanh thu: ";
        cin >> this->doanhthu;
    }

    virtual ~Sap() {
        this->stt = 0;
        this->dientich = 0;
        this->doanhthu = 0;
    }
};

long Sap::DON_GIA_THUE = 40000000;

class SapThucPham : public Sap {
private:

    long phidonglanh;

public:

    static float PHAN_TRAM_THUE_SAP_THUC_PHAM;

    long tinhThueDoanhthu()  {
        return (float)(PHAN_TRAM_THUE_SAP_THUC_PHAM * this->doanhthu);
    }

    long tinhTongTien() override {
        return this->tinhThueDoanhthu() + this->tinhTienthue();
    }

    void nhapThongtin() override {
        Sap::nhapThongtin();
        cout << "Nhap phi dong lanh: ";
        cin >> phidonglanh;
    }
};

float SapThucPham::PHAN_TRAM_THUE_SAP_THUC_PHAM = 0.05;

class SapQuanAo : public Sap {
public:

    static float PHAN_TRAM_THUE_SAP_QUAN_AO;

    long tinhThueDoanhthu()  {
        return (float)PHAN_TRAM_THUE_SAP_QUAN_AO * this->doanhthu;
    }

    long tinhTongTien() override {
        return this->tinhThueDoanhthu() + this->tinhTienthue();
    }

    void nhapThongtin() override {
        Sap::nhapThongtin();
    }
};

float SapQuanAo::PHAN_TRAM_THUE_SAP_QUAN_AO = 0.1;

class SapTrangSuc : public Sap {
public:

    static long GIOI_HAN;
    static float TREN;
    static float DUOI;

    long tinhThueDoanhthu() override {
        if (this->doanhthu < GIOI_HAN) {
            return DUOI * this->doanhthu;
        } else {
            return TREN * this->doanhthu;
        }
    }

    long tinhTongTien() override {
        return this->tinhThueDoanhthu() + this->tinhTienthue();
    }
};

long SapTrangSuc::GIOI_HAN = 100000000;
float SapTrangSuc::DUOI = 0.2;
float SapTrangSuc::TREN = 0.3;

class QuanLyDanhSach {
private:
    std::vector<Sap*> ds;

public:

    void nhapThongTin() {
        cout << "Nhap so luong sap duoc thue: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int chon;
            std::cout << "1-Sap Thuc Pham, 2-Sap Quan Ao, 3-Sap Trang Suc: ";
            std::cin >> chon;
            Sap* p = nullptr;
            if (chon == 1) {
                p = new SapThucPham();
            } else if (chon == 2) {
                p = new SapQuanAo();
            } else if (chon == 3) {
                p = new SapTrangSuc();
            } else {
                std::cout << "Nhap lai\n";
                i--;
                continue;
            }
            this->ds.push_back(p);
            this->ds[i]->nhapThongtin();
        }
    }

    long tinhTongTien() {
        long sum = 0;
        for (int i = 0; i < ds.size(); i++) {
            sum += this->ds[i]->tinhTongTien();
        }
        return sum;
    }

    ~QuanLyDanhSach() {
        for (Sap* p : ds) {
            delete p;
        }
        ds.clear();
    }
};

int main() {
    QuanLyDanhSach q1;
    q1.nhapThongTin();
    cout << "Tong tien la " << q1.tinhTongTien();
    return 0;
}
