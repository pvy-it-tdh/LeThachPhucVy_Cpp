#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // In bên trên
    cout << setw(5) << "*" << endl;
    cout << setw(7) << "***" << endl;
    cout << setw(9) << "*****" << endl;
    cout << setw(11) << "*******" << endl;

    // In bên dưới
    cout << setw(9) << "*****" << endl;
    cout << setw(7) << "***" << endl;
    cout << setw(5) << "*" << endl;

    return 0;
}
