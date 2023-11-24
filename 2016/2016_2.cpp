#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class BenhNhan {
protected:
    int MSBN;
    string hoatdong;

public:
    virtual void nhap() {
        cout << "Nhap ma so benh nhan: ";
        cin >> this->MSBN;
        cout << "Nhap hoat dong cua benh nhan: ";
        cin >> this->hoatdong;
    }

    virtual bool TrangThai() {
        return true;
    }

    virtual long TinhTien() {
        return 0;
    }

    virtual void xuat(ostream& outStream) {
        outStream << "Ma so benh nhan: " << this->MSBN << endl;
        outStream << "Hoat dong: " << hoatdong << endl;
    }
};

class BenhNhanNgoaiTru : public BenhNhan {
private:
    long VienPhi;

public:
    void nhap() {
        BenhNhan::nhap();
        cout << "Nhap vien phi: ";
        cin >> VienPhi;
    }

    long TinhTien() override {
        return this->VienPhi;
    }

    void xuat(ostream& outStream) override {
        BenhNhan::xuat(outStream);
        outStream << "Vien phi: " << VienPhi << endl;
    }
};

class BenhNhanNoiTru : public BenhNhan {
private:
    char loaiphong;
    int soNgayNamVien;
    long chiphikhambenh;

public:
    static long A;
    static long B;
    static long C;

    void nhap() override {
        BenhNhan::nhap();
        cout << "Nhap loai phong (A/B/C): "<< endl;
        cin >> loaiphong;
        cout << "Nhap so ngay nam vien: "<< endl;
        cin >> soNgayNamVien;
        cout << "Nhap chi phi kham benh"<< endl;
        cin >> chiphikhambenh;
    }

    long TinhTien() override {
        if (this->loaiphong == 'A') {
            return this->A * this->soNgayNamVien + this->chiphikhambenh * this->soNgayNamVien;
        }
        else if (this->loaiphong == 'B') {
            return this->B * this->soNgayNamVien + this->chiphikhambenh * this->soNgayNamVien;
        }
        else if (this->loaiphong == 'C') {
            return this->C * this->soNgayNamVien + this->chiphikhambenh * this->soNgayNamVien;
        }
        else {
            return 0;
        }
    }

    void xuat(ostream& outStream) override {
        BenhNhan::xuat(outStream);
        outStream << "Loai phong: " << loaiphong << endl;
        outStream << "So ngay nam vien: " << soNgayNamVien << endl;
        outStream << "Phi kham benh: " << chiphikhambenh << endl;
        outStream << "Tong chi phi kham benh: " << TinhTien() << endl;
    }
};

long BenhNhanNoiTru::A = 1400000;
long BenhNhanNoiTru::B = 900000;
long BenhNhanNoiTru::C = 600000;

class DanhSachBenhNhan {
    vector<BenhNhan*> ds;

private:
    int soluongBNNoiT = 0; // số lượng bệnh nhân Noi trú
    int soluongBNNgoaiT = 0; // số lượng bệnh nhân Ngoại trú

public:
    void nhapThongtin() {
        cout << "Nhap so luong benh nhan: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int chon;
            cout << "1-Benh Nhan Noi Tru, 2-Benh Nhan Ngoai Tru" << endl;
            cin >> chon;
            BenhNhan* p = nullptr;
            if (chon == 1) {
                p = new BenhNhanNoiTru();
                soluongBNNoiT += 1;
            }
            else if (chon == 2) {
                p = new BenhNhanNgoaiTru();
                soluongBNNgoaiT += 1;
            }
            else {
                cout << "Nhap lai";
                i--;
                continue;
            }
            this->ds.push_back(p);
            this->ds[i]->nhap();
        }
    }

    int NgoaiTru() {
        return soluongBNNgoaiT;
    }

    int NoiTru() {
        return soluongBNNoiT;
    }

    long tinhTongTien() {
        long sum = 0;
        for (int i = 0; i < ds.size(); i++) {
            sum += this->ds[i]->TinhTien();
        }
        return sum;
    }

    void xuatThongTin(ostream& outStream) {
        for (int i = 0; i < ds.size(); i++) {
            this->ds[i]->xuat(outStream);
            outStream << "--------------------" << endl;
        }
    }

    ~DanhSachBenhNhan() {
        for (BenhNhan* p : ds) {
            delete p;
        }
        ds.clear();
    }
};

int main() {
    DanhSachBenhNhan q1;
    ofstream fileOut("danhsach.txt"); // Tạo và mở tệp để ghi xuất
    if (fileOut.is_open()) {
        q1.nhapThongtin();
        cout << "So luong benh nhan noi tru la " << q1.NoiTru() << endl;
        cout << "So luong benh nhan ngoai tru la " << q1.NgoaiTru() << endl;
        cout << "Tong tien la " << q1.tinhTongTien() << endl;

        fileOut << "So luong benh nhan noi tru la " << q1.NoiTru() << endl;
        fileOut << "So luong benh nhan ngoai tru la " << q1.NgoaiTru() << endl;
        fileOut << "Tong tien la " << q1.tinhTongTien() << endl;

        q1.xuatThongTin(cout); // Xuất ra màn hình
        q1.xuatThongTin(fileOut); // Xuất vào tệp
        fileOut.close(); // Đóng tệp
    }
    else {
        cout << "Khong the mo file de ghi.";
    }

    return 0;
}
