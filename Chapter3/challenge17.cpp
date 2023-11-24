// Chuong trinh kiem tra tinh toan
#include <iostream>

using namespace std;
int main()
{
    int numA;
    int numB;
    char Key;
    cout << "Nhap so thu nhat: ";
    cin >> numA;
    cout << "Nhap so thu hai: ";
    cin >> numB;
    //Tao cong thuc phep tinh
    int Ans = numA + numB;
    cout << "Enter 1 to show the answer: ";
    cin >> Key;
    cout << numA << endl;
    cout << "+" << endl;
    cout << numB << endl;
    cout << "----" << endl;
    cout << Ans << endl;
    return 0;
}