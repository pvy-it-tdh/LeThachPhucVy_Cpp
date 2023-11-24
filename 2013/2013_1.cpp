#include <iostream>
using namespace std;

class I {
private:
    int a;
    int b;
    int x = 7;

public:
    I(const int& _a, const int& _b) : a(_a), b(_b) {}

    I operator +(const I& c) {
        I result(a + c.a, b + c.b);
        return result;
    }

    I operator -(const I& c) {
        I result(a - c.a, b - c.b);
        return result;
    }

    I operator -() {
        I result(-a, -b);
        return result;
    }

    I operator *(const I& c) {
        I result(a * c.a + 7 * b * c.b, a * c.b + b * c.a);// (a+bsqrt(7))*)(c+dsqrt(7))
        return result;
    }

    friend istream& operator >> (istream& is, I& obj) {
        is >> obj.a >> obj.b;
        return is;
    }

    friend ostream& operator << (ostream& os, I& obj) {
        if (obj.b>0&& obj.a>0)
       { 
            os << obj.a << " + " << obj.b << "sqrt(" << obj.x<< ")";
            return os;
       }
       if(obj.b<0)
       {
            os << obj.a << " "<< obj.b << "sqrt("<< obj.x<< ")";
            return os;
       }
       if(obj.a==0)
       {
            os << obj.b << "sqrt("<< obj.x << ")";
            return os;
       }
       if(obj.b==0)
       {
            os << obj.a;
            return os;
       }
       return os;
    }
};

int main() {
    I complex1(3, 2);
    I complex2(1, -5);

    cout << "Complex 1: " << complex1 << endl;
    cout << "Complex 2: " << complex2 << endl;

    I sum = complex1 + complex2;
    I difference = complex1 - complex2;
    I negation = -complex1;
    I product = complex1 * complex2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Negation: " << negation << endl;
    cout << "Product: " << product << endl; 

    return 0;
}
