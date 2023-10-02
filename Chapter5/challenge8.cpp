#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout << "chon loai phep tinh\n1 cong\n2 tru\n3 nhan\4 chia\5 thoat";
    cin >> choice;
    int a,b;
    switch (choice)
    {
    case 1:
    cin >> a >> b;
    cout << a << " + "<< b <<"="<< a+b;
        break;
    case 2:
    cin >> a >> b;
    cout << a << " -"<< b <<"="<< a-b;
        break;
    case 3:
    cin >> a >> b;
    cout << a << " * "<< b <<"="<< a*b;
        break;
    case 4:
    cin >> a >> b;
    cout << a << " / "<< b <<"="<< a/b;
        break;
    
    default:
        break;
    }

}