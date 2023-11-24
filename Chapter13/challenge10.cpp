#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class MangSo {
    private:
    int kichThuoc;
    double *mang;

    public:

    MangSo(int size) : kichThuoc(size) {
        if (kichThuoc <= 0)
        {
            cout <<" Loi: Kich thuoc mang khong dung.\n";
            exit(EXIT_FAILURE);
        }
        mang = new double[kichThuoc];
    }

    ~MangSo()
    {
        delete[] mang;
    }

    // ham luu tru so trong mang
    void LuuTruSo (int index, double value)
    {
        if (index >= 0 && index < kichThuoc)
        {
            mang[index] = value;
        }
        else
        {
            cout <<" Loi: Mang khong hop le.\n";
        }
    }

    // Ham truy xuat so tu mang
    double TruyXuatSo (int index) const{
        if (index >= 0 && index <kichThuoc)
        {
            return mang[index];
        }
        else
        {
            cout <<" Loi: Mang khong hop le.\n";
            exit(EXIT_FAILURE);
        }
    }

    // ham tra ve gia tri cao nhat
    double GiaTriCaoNhat () const {
        double maxVa1 = mang[0];
        for ( int i =0 ; i < kichThuoc; i++)
        {
            if ( mang[i] > maxVa1)
            {
                maxVa1= mang[i];
            }
        }
        return maxVa1;
    }

    // Ham tra ve gia tri thap nhat
    double GiaTriThapNhat() const {
        double minVa1 = mang[0];
        for ( int i = 0; i < kichThuoc; i++)
        {
            if (mang[i] < minVa1)
            {
                minVa1 = mang[i];
            }
        }
        return minVa1;
    }

    // ham tra ve gia tri trung binh
    double GiaTriTrungBinh() const {
        double sum = 0.0;
        for (int i = 0; i < kichThuoc; i++ )
        {
            sum += mang[i];
        }
        return sum / kichThuoc;
    }
};

int main()
{
    int kichThuoc;
    cout <<" Nhap kich thuoc cua mang: ";
    cin >> kichThuoc;

    MangSo mangSo(kichThuoc);

    // Nhap gia tri vao mang
    for (int i =0; i < kichThuoc; i++)
    {
        double giaTri;
        cout <<" Nhap gia tri thu " << i+ 1 <<" :";
        cin >> giaTri;
        mangSo.LuuTruSo(i, giaTri);
    }

    cout <<" Gia tri cao nhat trong mang: " << mangSo.GiaTriCaoNhat() <<" \n";
    cout <<" Gia tri thap nhat trong mang: " << mangSo.GiaTriThapNhat() <<" \n";
    cout <<" Gia tri trung binh trong mang la: " << mangSo.GiaTriTrungBinh() << "\n";

    return 0;
}