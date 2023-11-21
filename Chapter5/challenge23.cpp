#include <iostream>

using namespace std;

int main() {
    const int rows = 10;

    // Hiển thị Pattern A
    cout << "Pattern A" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    // Hiển thị Pattern B
    cout << "\nPattern B" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
