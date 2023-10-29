#include<iostream>
class PhanSo {
private:
    int tu, mau;

public:
    PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }

    PhanSo(const int& tu, const int& mau) {
        this->tu = tu;
        this->mau = mau;
        if (this->mau == 0) {
            cout << "Mau khong duoc bang 0\n";
            this->tu = 0;
            this->mau = 0;
        }
    }

    PhanSo operator+(const PhanSo& ps) {
        PhanSo newPhanSo(this->tu * ps.mau + this->mau * ps.tu, this->mau * ps.mau);
        return newPhanSo;
    }

    PhanSo operator+=(const PhanSo& ps) {
        this->tu = this->tu * ps.mau + this->mau * ps.tu;
        this->mau *= ps.mau;
        return *this;
    }

    PhanSo operator+(const int& iNum) {
        PhanSo newPhanSo(this->tu + iNum * this->mau, this->mau);
        return newPhanSo;
    }

    PhanSo operator++() {
        this->tu += this->mau;
        return *this;
    }

    operator int() {
        return this->tu / this->mau;
    }

    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        os << ps.tu << "/" << ps.mau;
        return os;
    }

    ~PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }
};
using namespace std;
int main ()
{
    PhanSo a(1,3),c;
    int b=8;
    c=a+b;
    cout << "c= "<< a<< "+ "<< b << "= "<< c << endl;
    cout <<"++c: ";
    cout << "c= "<< ++c << endl;
    cout << "a= "<< a << " + "<< c << endl;
    a+=c;
    cout << "a= "<< a << endl;
    b=a;
    cout << "b= "<< b<< endl;
    return 0;
}