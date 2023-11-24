#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.14159;

public :

Circle() : radius (0.0) {}

Circle (double r) : radius(r){}

    void setRadius(double r) { radius = r;}

    double getRadius() const { return radius;}

    double getAres () const { return PI * radius * radius;}

    double getDiameter() const { return radius * 2;}

    double getCircumference() const {return 2 * PI * radius;}

};

int main()
{
    double banKinh;
    cout <<" Nhap ban kinh cua hinh tron: ";
    cin >> banKinh;

    Circle hinhTron(banKinh);

    cout <<" Dien tich cua hinh tron: " << hinhTron.getAres() <<" \n";
    cout <<" Duong kinh cua hinh tron: " << hinhTron.getDiameter() <<"\n";
    cout <<" Chi vi cua hinh tron: " << hinhTron.getCircumference() << " \n";

    return 0;
}
