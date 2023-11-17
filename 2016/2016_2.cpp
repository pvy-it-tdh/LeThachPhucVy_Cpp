#include<iostream>
#include<vector>
using namespace std;

// bảng thống kê viện phí từng bệnh nhân
// bệnh viện có bao nhiêu bệnh nhân nội trú và ngoại trú

class BenhNhan{
    protected:
        int MSBN;
    public:
        virtual void nhap()
        {
            cout << "Nhap ma so benh nhan ";
            cin >> this->MSBN;
        }
        virtual bool TrangThai()
        {
            return true;
        }
        virtual  long TinhTien()
        {
            return 0;
        }
        virtual void xuat()
        {
            cout << "Ma so benh nhan la "<< this->MSBN;
            
        }
};
class BenhNhanNgoaiTru: public BenhNhan
{
    private:
        long VienPhi;
    public:
        void nhap()
        {
            BenhNhan ::nhap();
            cout << "Nhap vien phi ";
            cin >> VienPhi;
        }
        long TinhTien()
        {
            return this->VienPhi;

        }
        void xuat()
        {
            BenhNhan::xuat();
            cout << "Vien phi la "<<VienPhi;
        }
};
class BenhNhanNoiTru:public BenhNhan{
    private: 
        char loaiphong;
        int soNgayNamVien;
        bool daXuatVien;
        long phiKhamBenhMoiNgay;
    public:
        static long A;
        static long B;
        static long C;
        void nhap()
        {
            BenhNhan::nhap();
            cout <<"Nhap phi kham benh moi ngay ";
            cin >>phiKhamBenhMoiNgay;
            cout << "Chon loai phong co 3 loai A,B,C";
            cin >> loaiphong;
        }
        long TinhTien()
        {
            if(this->loaiphong=='A')
            {
                return this->A*this->soNgayNamVien +this->phiKhamBenhMoiNgay*this->soNgayNamVien;
            }
            else if(this->loaiphong=='B')
            {
                return this->B*this->soNgayNamVien+this->phiKhamBenhMoiNgay*this->soNgayNamVien;

            }
            else if(this->loaiphong=='C')
            {
                return this->C*this->soNgayNamVien+this->phiKhamBenhMoiNgay*this->soNgayNamVien;
            }
            else{
                return 0;
            }
        }
        void xuat()
        {
            BenhNhan::xuat();
            cout <<"Loai phong" <<loaiphong;
            cout << "So ngay nam vien "<< soNgayNamVien; 
            cout << "Tong chi phi kham benh "<< TinhTien();
        
        }
};
long BenhNhanNoiTru::A = 1400000;
long BenhNhanNoiTru::B = 900000;
long BenhNhanNoiTru::C = 600000;
class DanhSachBenhNhan{
    vector<BenhNhan *> ds;
    private:    
        int soluongBNNoiT=0;// số lượng bệnh nhân Noi trú
        int soluongBNNgoaiT=0;// số lượng bệnh nhân Ngoại trú
    public:
    void nhapThongtin()
    {
        cout <<"Nhap so luong benh nhan ";
        int n;
        cin >> n;
        for (int i =0;i<n;i++)
        {
            int chon;
            cout << "1-Benh Nhan Noi Tru, 2-Benh Nhan Ngoai Tru";
            cin >> chon;
            BenhNhan* p=nullptr;
            if(chon==1)
            {
                p=new BenhNhanNoiTru();
                soluongBNNoiT+=1;
            }
            else if(chon==2)
            {
                p=new BenhNhanNgoaiTru();
                soluongBNNgoaiT+=1;
            }
            else{
                cout << "Nhap lai";
                i--;
                continue;
            }
            this->ds.push_back(p);
            this->ds[i]->nhap();
            this->ds[i]->xuat();
            
        }
    }
    int NgoaiTru()
        {
            return soluongBNNgoaiT;
        }
    int NoiTru()
        {
            return soluongBNNoiT;
        }
    long tinhTongTien()
    {
        long sum=0;
        for (int i=0;i<ds.size();i++)
        {
            sum+=this->ds[i]->TinhTien();
        }
        return sum;
    }
    
    ~DanhSachBenhNhan()
    {
        for(BenhNhan* p:ds)
        {
            delete p;
        }
        ds.clear();
    }
   
};
int main()
{
    DanhSachBenhNhan q1;
    q1.nhapThongtin();
    cout << "So luong benh nhan noi tru la "<< q1.NoiTru();
    cout << "So luong benh nhan ngoai tru la "<< q1.NgoaiTru();
    cout << "Tong tien la "<< q1.tinhTongTien();
    
    return 0;
}